// Mapa8Builder.h - Concrete Builder 2
#pragma once

#include "CoreMinimal.h"
#include "MapaBuilder.h"
#include "Mapa8Builder.generated.h"

UCLASS()
class BOMBERMAN_012025_API AMapa8Builder : public AMapaBuilder
{
    GENERATED_BODY()

public:
    AMapa8Builder();

    // Implementaciones espec�ficas para el mapa en forma de 8
    virtual void BuildBordes() override;
    virtual void BuildEstructuraInterna() override;
    virtual void BuildPowerUps() override;
};