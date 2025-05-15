// MapaPlanoBuilder.h - Concrete Builder 3
#pragma once

#include "CoreMinimal.h"
#include "MapaBuilder.h"
#include "MapaPlanoBuilder.generated.h"

UCLASS()
class BOMBERMAN_012025_API AMapaPlanoBuilder : public AMapaBuilder
{
    GENERATED_BODY()

public:
    AMapaPlanoBuilder();

    // Implementaciones espec�ficas para el mapa plano
    virtual void BuildBordes() override;
    virtual void BuildEstructuraInterna() override;
    virtual void BuildPowerUps() override;
};