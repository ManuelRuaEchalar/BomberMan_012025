// BomberMan_012025GameMode.cpp - Implementación modificada con patrón Composite para bombas
#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueBurbuja.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "FabricaBloques.h"
#include "DirectorMapa.h"
#include "MapaBuilder.h"
#include "MapaOBuilder.h"
#include "Mapa8Builder.h"
#include "MapaPlanoBuilder.h"
#include "Tablero.h"
#include "BombaNormal.h"
#include "BombaEspecial.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
    // Set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}

void ABomberMan_012025GameMode::BeginPlay()
{
    Super::BeginPlay();

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Juego iniciado"));

    // Crear la fábrica de bloques
    FabricaDeBloques = GetWorld()->SpawnActor<AFabricaBloques>(AFabricaBloques::StaticClass());

    // Crear el director del mapa
    DirectorMapa = GetWorld()->SpawnActor<ADirectorMapa>(ADirectorMapa::StaticClass());

    // Construir un tipo de mapa por defecto
    TableroJuego = ConstruirMapa("8");

    // Generar los bloques del mapa
    if (TableroJuego)
    {
        // Crear los bloques según la matriz generada
        for (int32 fila = 0; fila < TableroJuego->MapaBloques.Num(); ++fila)
        {
            for (int32 columna = 0; columna < TableroJuego->MapaBloques[fila].Num(); ++columna)
            {
                int32 valor = TableroJuego->MapaBloques[fila][columna];
                if (valor != 0) // Si no es espacio vacío
                {
                    // Calculamos la posición del bloque
                    FVector posicionBloque = FVector(
                        XInicial + columna * AnchoBloque,
                        YInicial + fila * LargoBloque,
                        20.0f);

                    // Crear el bloque según su tipo
                    ABloque* BloqueCreado = nullptr;

                    switch (valor)
                    {
                    case 1: // Madera
                        BloqueCreado = FabricaDeBloques->CrearBloque("Madera", posicionBloque);
                        break;
                    case 2: // Ladrillo
                        BloqueCreado = FabricaDeBloques->CrearBloque("Ladrillo", posicionBloque);
                        break;
                    case 3: // Concreto
                        BloqueCreado = FabricaDeBloques->CrearBloque("Concreto", posicionBloque);
                        break;
                    case 4: // Acero
                        BloqueCreado = FabricaDeBloques->CrearBloque("Acero", posicionBloque);
                        break;
                    case 5: // Burbuja
                        BloqueCreado = FabricaDeBloques->CrearBloque("Burbuja", posicionBloque);
                        break;
                    default:
                        break;
                    }

                    // Agregar el bloque al array si fue generado
                    if (BloqueCreado)
                    {
                        aBloques.Add(BloqueCreado);
                    }
                }
            }
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error: No se pudo crear el tablero"));
    }

    // Crear un Goomba prototipo y un clon
    FVector PosicionPrototipo = FVector(900.0f, 1650.0f, 422.0f);
    CrearGoombaPrototipo(PosicionPrototipo);

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Goomba prototipo creado en: X=%.1f, Y=%.1f, Z=%.1f"),
        PosicionPrototipo.X, PosicionPrototipo.Y, PosicionPrototipo.Z));

    FTimerHandle GoombaTimerHandle;
    GetWorldTimerManager().SetTimer(GoombaTimerHandle, [this]()
        {
            FVector PosicionClon = FVector(900.0f, 2050.0f, 422.0f);
            ClonarGoomba(PosicionClon);

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Goomba clonado creado en: X=%.1f, Y=%.1f, Z=%.1f"),
                PosicionClon.X, PosicionClon.Y, PosicionClon.Z));

        }, 2.0f, false);

    // NUEVO CÓDIGO: Implementar patrón Composite con bombas

    // Crear las bombas inmediatamente
    CrearBombas();

    // Programar el inicio de las explosiones después de 10 segundos
    FTimerHandle BombasTimerHandle;
    GetWorldTimerManager().SetTimer(BombasTimerHandle, [this]()
        {
            IniciarExplosiones();
        }, 10.0f, false);
}

void ABomberMan_012025GameMode::CrearBombas()
{
    if (!GetWorld()) return;

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Creando bombas..."));

    // Crear 2 bombas normales
    for (int32 i = 0; i < 2; ++i)
    {
        FVector PosicionBomba = GenerarPosicionAleatoria();
        CrearBombaNormal(PosicionBomba);
    }

    // Crear 3 bombas especiales
    for (int32 i = 0; i < 3; ++i)
    {
        FVector PosicionBomba = GenerarPosicionAleatoria();
        CrearBombaEspecial(PosicionBomba);
    }

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan,
        FString::Printf(TEXT("Se crearon %d bombas en total"), aBombas.Num()));
}

void ABomberMan_012025GameMode::IniciarExplosiones()
{
    GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("¡Iniciando secuencia de explosiones!"));

    // Hacer explotar todas las bombas (patrón Composite en acción)
    for (ABombaBase* Bomba : aBombas)
    {
        if (Bomba)
        {
            Bomba->Explotar(); // Polimorfismo: cada bomba explota según su tipo
        }
    }
}

void ABomberMan_012025GameMode::CrearBombaNormal(FVector Posicion)
{
    if (!GetWorld()) return;

    ABombaNormal* BombaNueva = GetWorld()->SpawnActor<ABombaNormal>(ABombaNormal::StaticClass(), Posicion, FRotator::ZeroRotator);
    if (BombaNueva)
    {
        aBombas.Add(BombaNueva);
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow,
            FString::Printf(TEXT("Bomba Normal creada en: X=%.1f, Y=%.1f, Z=%.1f"),
                Posicion.X, Posicion.Y, Posicion.Z));
    }
}

void ABomberMan_012025GameMode::CrearBombaEspecial(FVector Posicion)
{
    if (!GetWorld()) return;

    ABombaEspecial* BombaNueva = GetWorld()->SpawnActor<ABombaEspecial>(ABombaEspecial::StaticClass(), Posicion, FRotator::ZeroRotator);
    if (BombaNueva)
    {
        aBombas.Add(BombaNueva);
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange,
            FString::Printf(TEXT("Bomba Especial creada en: X=%.1f, Y=%.1f, Z=%.1f"),
                Posicion.X, Posicion.Y, Posicion.Z));
    }
}

FVector ABomberMan_012025GameMode::GenerarPosicionAleatoria()
{
    // Generar posiciones aleatorias en un área específica del mapa
    float X = FMath::RandRange(500.0f, 1500.0f);
    float Y = FMath::RandRange(500.0f, 1500.0f);
    float Z = 100.0f; // Altura fija

    return FVector(X, Y, Z);
}
ATablero* ABomberMan_012025GameMode::ConstruirMapa(FString TipoMapa)
{
    // Crear el builder seg�n el tipo solicitado
    AMapaBuilder* Builder = nullptr;

    if (TipoMapa == "O")
    {
        Builder = GetWorld()->SpawnActor<AMapaOBuilder>(AMapaOBuilder::StaticClass());
    }
    else if (TipoMapa == "8")
    {
        Builder = GetWorld()->SpawnActor<AMapa8Builder>(AMapa8Builder::StaticClass());
    }
    else if (TipoMapa == "Plano")
    {
        Builder = GetWorld()->SpawnActor<AMapaPlanoBuilder>(AMapaPlanoBuilder::StaticClass());
    }

    if (Builder && DirectorMapa)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Builder aplicado con exito"));
        // Configurar el builder en el director
        DirectorMapa->SetBuilder(Builder);

        // Construir el mapa completo con powerups
        DirectorMapa->ConstruirMapaConPowerUps();

        // Obtener el resultado (matriz de bloques y el tablero)
        const TArray<TArray<int32>>& MapaTemporal = DirectorMapa->ObtenerMapa();
        aMapaBloques.Empty();
        aMapaBloques.Append(MapaTemporal);

        // Obtener el tablero completo
        return Builder->GetTablero();
    }

    return nullptr;
}

void ABomberMan_012025GameMode::SpawnBloque(FVector posicion, int32 tipoBloque)
{
    ABloque* BloqueGenerado = nullptr;

    if (FabricaDeBloques)
    {
        switch (tipoBloque)
        {
        case 5: // Burbuja
            BloqueGenerado = FabricaDeBloques->CrearBloque("Burbuja", posicion);
            break;
        case 4: // Acero
            BloqueGenerado = FabricaDeBloques->CrearBloque("Acero", posicion);
            break;
        case 3: // Concreto
            BloqueGenerado = FabricaDeBloques->CrearBloque("Concreto", posicion);
            break;
        case 2: // Ladrillo
            BloqueGenerado = FabricaDeBloques->CrearBloque("Ladrillo", posicion);
            break;
        case 1: // Madera
            BloqueGenerado = FabricaDeBloques->CrearBloque("Madera", posicion);
            break;
        default:
            return;
        }
    }

    // Agregar el bloque al TArray si fue generado
    if (BloqueGenerado)
    {
        aBloques.Add(BloqueGenerado);
    }
}

void ABomberMan_012025GameMode::DestruirBloque()
{
    // Seleccionar aleatoriamente un bloque del array ABloques para su eliminacion
    int numeroBloques = aBloques.Num();

    if (numeroBloques > 0)
    {
        int NumeroAleatorio = FMath::RandRange(0, numeroBloques - 1);
        BloqueActual = aBloques[NumeroAleatorio];

        if (BloqueActual)
        {
            BloqueActual->Destroy();
            aBloques.RemoveAt(NumeroAleatorio);
        }
    }
}

void ABomberMan_012025GameMode::CrearGoombaPrototipo(FVector Ubicacion)
{
    // Verificar si ya existe un prototipo
    if (GoombaPrototipo == nullptr)
    {
        // Crear un nuevo prototipo de Goomba
        GoombaPrototipo = GetWorld()->SpawnActor<AGoombaEnemigo>(AGoombaEnemigo::StaticClass(), Ubicacion, FRotator::ZeroRotator);

        if (GoombaPrototipo)
        {
            // Configurar propiedades personalizadas para el prototipo
            GoombaPrototipo->SetMovementSpeed(150.0f);  // Velocidad personalizada
            GoombaPrototipo->SetPatrolRadius(300.0f);   // Radio de patrulla personalizado

            // Agregar al array de Goombas
            aGoombas.Add(GoombaPrototipo);

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Prototipo de Goomba creado con éxito"));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("El prototipo de Goomba ya existe"));
    }
}

void ABomberMan_012025GameMode::ClonarGoomba(FVector Ubicacion)
{
    // Verificar si existe un prototipo para clonar
    if (GoombaPrototipo)
    {
        // Usar el método Clone del patrón Prototype
        AActor* GoombaClonado = GoombaPrototipo->Clone(Ubicacion);

        if (GoombaClonado)
        {
            // Convertir a tipo AGoombaEnemigo y agregar al array
            AGoombaEnemigo* Goomba = Cast<AGoombaEnemigo>(GoombaClonado);
            if (Goomba)
            {
                aGoombas.Add(Goomba);
                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Goomba clonado con éxito"));
            }
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay un prototipo de Goomba para clonar. Crea uno primero."));
    }
}

void ABomberMan_012025GameMode::DestruirGoomba()
{
    // Seleccionar aleatoriamente un Goomba del array para su eliminación
    int numeroGoombas = aGoombas.Num();

    if (numeroGoombas > 0)
    {
        int NumeroAleatorio = FMath::RandRange(0, numeroGoombas - 1);
        AGoombaEnemigo* GoombaAEliminar = aGoombas[NumeroAleatorio];

        if (GoombaAEliminar)
        {
            // Si es el prototipo, actualizar la referencia
            if (GoombaAEliminar == GoombaPrototipo)
            {
                GoombaPrototipo = nullptr;
            }

            // Destruir el actor
            GoombaAEliminar->Destroy();
            aGoombas.RemoveAt(NumeroAleatorio);

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Goomba destruido"));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay Goombas para destruir"));
    }
}