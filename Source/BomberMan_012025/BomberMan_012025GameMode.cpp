// BomberMan_012025GameMode.cpp - Implementaci�n modificada con patr�n Builder actualizado
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
#include "Engine/Engine.h"

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

    // Crear la f�brica de bloques
    FabricaDeBloques = GetWorld()->SpawnActor<AFabricaBloques>(AFabricaBloques::StaticClass());

    // Crear el director del mapa
    DirectorMapa = GetWorld()->SpawnActor<ADirectorMapa>(ADirectorMapa::StaticClass());

    // Construir un tipo de mapa por defecto
    // Puedes cambiar "O" por "8" o "Plano" para probar diferentes mapas
    TableroJuego = ConstruirMapa("Plano");

    if (TableroJuego)
    {
        // Crear los bloques seg�n la matriz generada
        for (int32 fila = 0; fila < TableroJuego->MapaBloques.Num(); ++fila)
        {
            for (int32 columna = 0; columna < TableroJuego->MapaBloques[fila].Num(); ++columna)
            {
                int32 valor = TableroJuego->MapaBloques[fila][columna];
                if (valor != 0) // Si no es espacio vac�o
                {
                    // Calculamos la posici�n del bloque
                    FVector posicionBloque = FVector(
                        XInicial + columna * AnchoBloque,
                        YInicial + fila * LargoBloque,
                        20.0f);

                    // Crear el bloque seg�n su tipo
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