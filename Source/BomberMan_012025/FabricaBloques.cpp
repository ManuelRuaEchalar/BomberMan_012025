﻿// FabricaBloques.cpp - Versi�n corregida
#include "FabricaBloques.h"
#include "BloqueAcero.h"
#include "BloqueBurbuja.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"

// Sets default values
AFabricaBloques::AFabricaBloques()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFabricaBloques::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AFabricaBloques::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

ABloque* AFabricaBloques::CrearBloque(FString tipoBloque, FVector posicion)
{
    if (tipoBloque.Equals("Acero")) {
        return GetWorld()->SpawnActor<ABloqueAcero>
            (ABloqueAcero::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
    }
    else if (tipoBloque.Equals("Concreto")) {
        return GetWorld()->SpawnActor<ABloqueConcreto>
            (ABloqueConcreto::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
    }
    else if (tipoBloque.Equals("Ladrillo")) {
        return GetWorld()->SpawnActor<ABloqueLadrillo>
            (ABloqueLadrillo::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
    }
    else if (tipoBloque.Equals("Madera")) {
        // Corregido: Ahora crea BloqueMadera en lugar de BloqueLadrillo
        return GetWorld()->SpawnActor<ABloqueMadera>
            (ABloqueMadera::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
    }
    else if (tipoBloque.Equals("Burbuja")) {
        return GetWorld()->SpawnActor<ABloqueBurbuja>
            (ABloqueBurbuja::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
    }
    else return nullptr;
}