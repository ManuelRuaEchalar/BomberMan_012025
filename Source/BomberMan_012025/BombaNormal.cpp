#include "BombaNormal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ABombaNormal::ABombaNormal()
{
    // Constructor vac�o, la configuraci�n se hace en la clase base
    // Cargar y aplicar el material de madera
    static ConstructorHelpers::FObjectFinder<UMaterial> WoodMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
    if (WoodMaterial.Succeeded() && MeshComponent)
    {
        MeshComponent->SetMaterial(0, WoodMaterial.Object);
    }
}

void ABombaNormal::Explotar()
{
    // Mostrar mensaje de depuraci�n
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red,
            FString::Printf(TEXT("�Bomba Normal explot� en posici�n: X=%.1f, Y=%.1f, Z=%.1f!"),
                GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));
    }

    // Reproducir efecto de explosi�n
    ReproducirExplosion();

    // Destruir la bomba despu�s de un breve delay para permitir que se vea la explosi�n
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, [this]()
        {
            Destroy();
        }, 1.0f, false);
}

void ABombaNormal::ConfigurarMaterial()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("asignando material..."));

}