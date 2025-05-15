// MapaOBuilder.h - Concrete Builder 1
#pragma once

#include "CoreMinimal.h"
#include "MapaBuilder.h"
#include "MapaOBuilder.generated.h"

UCLASS()
class BOMBERMAN_012025_API AMapaOBuilder : public AMapaBuilder
{
    GENERATED_BODY()

public:
    AMapaOBuilder();

    virtual void BuildBordes() override;
    virtual void BuildEstructuraInterna() override;
    virtual void BuildPowerUps() override;
};