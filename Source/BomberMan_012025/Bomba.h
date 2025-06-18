// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Bomba.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UBomba : public UInterface
{
    GENERATED_BODY()
};

/**
 * Interfaz que define las operaciones comunes para bombas simples y compuestas
 */
class BOMBERMAN_012025_API IBomba
{
    GENERATED_BODY()

public:
    // Método virtual puro que debe ser implementado por todas las bombas
    virtual void Explotar() = 0;

    // Método virtual para agregar bombas hijas (solo usado por BombaEspecial)
    virtual void AgregarBomba(class ABombaBase* Bomba) {}

    // Método virtual para remover bombas hijas (solo usado por BombaEspecial)
    virtual void RemoverBomba(class ABombaBase* Bomba) {}

    // Método virtual para obtener bombas hijas (solo usado por BombaEspecial)
    virtual TArray<class ABombaBase*> ObtenerBombas() { return TArray<class ABombaBase*>(); }
};