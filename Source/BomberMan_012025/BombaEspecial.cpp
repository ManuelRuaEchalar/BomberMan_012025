#include "BombaEspecial.h"
#include "BombaNormal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ABombaEspecial::ABombaEspecial()
{
    // Constructor vacío, la configuración se hace en BeginPlay
    // Cargar y aplicar el material de acero
    static ConstructorHelpers::FObjectFinder<UMaterial> SteelMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
    if (SteelMaterial.Succeeded() && MeshComponent)
    {
        MeshComponent->SetMaterial(0, SteelMaterial.Object);
    }
}

void ABombaEspecial::BeginPlay()
{
    Super::BeginPlay();

    // Crear las bombas hijas automáticamente
    CrearBombasHijas();
}

void ABombaEspecial::Explotar()
{
    // Mostrar mensaje de depuración
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange,
            FString::Printf(TEXT("¡Bomba Especial explotó! Liberando %d bombas hijas en posición: X=%.1f, Y=%.1f, Z=%.1f"),
                BombasHijas.Num(), GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));
    }

    // Reproducir efecto de explosión
    ReproducirExplosion();

    // Hacer visibles las bombas hijas y programar su explosión
    ProgramarExplosionBombasHijas();

    // Ocultar la bomba especial (pero no destruirla inmediatamente para mantener las referencias)
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);

    // Destruir la bomba especial después de que exploten las bombas hijas
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, [this]()
        {
            Destroy();
        }, 12.0f, false); // 12 segundos: 10 para que exploten las hijas + 2 de margen
}

void ABombaEspecial::AgregarBomba(ABombaBase* Bomba)
{
    if (Bomba && !BombasHijas.Contains(Bomba))
    {
        BombasHijas.Add(Bomba);
    }
}

void ABombaEspecial::RemoverBomba(ABombaBase* Bomba)
{
    if (Bomba)
    {
        BombasHijas.Remove(Bomba);
    }
}

TArray<ABombaBase*> ABombaEspecial::ObtenerBombas()
{
    return BombasHijas;
}

void ABombaEspecial::ConfigurarMaterial()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("asignando material..."));

}

void ABombaEspecial::CrearBombasHijas()
{
    if (!GetWorld()) return;

    // Crear entre 2 y 3 bombas hijas
    int32 NumBombasHijas = FMath::RandRange(2, 3);

    for (int32 i = 0; i < NumBombasHijas; ++i)
    {
        // Calcular posición aleatoria alrededor de la bomba especial
        float OffsetX = FMath::RandRange(-200.0f, 200.0f);
        float OffsetY = FMath::RandRange(-200.0f, 200.0f);
        FVector PosicionHija = GetActorLocation() + FVector(OffsetX, OffsetY, 0.0f);

        // Crear bomba normal como hija
        ABombaNormal* BombaHija = GetWorld()->SpawnActor<ABombaNormal>(ABombaNormal::StaticClass(), PosicionHija, FRotator::ZeroRotator);

        if (BombaHija)
        {
            // Hacer la bomba hija más pequeña (70% del tamaño original)
            BombaHija->SetFactorEscala(0.7f);

            // Inicialmente ocultar la bomba hija
            BombaHija->SetActorHiddenInGame(true);
            BombaHija->SetActorEnableCollision(false);

            // Agregar a la lista de bombas hijas
            AgregarBomba(BombaHija);
        }
    }

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue,
            FString::Printf(TEXT("Bomba Especial creada con %d bombas hijas"), BombasHijas.Num()));
    }
}

void ABombaEspecial::ProgramarExplosionBombasHijas()
{
    // Hacer visibles todas las bombas hijas
    for (ABombaBase* BombaHija : BombasHijas)
    {
        if (BombaHija)
        {
            BombaHija->SetActorHiddenInGame(false);
            BombaHija->SetActorEnableCollision(true);
        }
    }

    // Programar la explosión de las bombas hijas después de 10 segundos
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, [this]()
        {
            for (ABombaBase* BombaHija : BombasHijas)
            {
                if (BombaHija)
                {
                    BombaHija->Explotar();
                }
            }
        }, 10.0f, false);
}