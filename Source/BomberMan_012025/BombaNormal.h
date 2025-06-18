#pragma once

#include "CoreMinimal.h"
#include "BombaBase.h"
#include "BombaNormal.generated.h"

/**
 * Clase BombaNormal - Representa una hoja en el patr�n Composite
 * Implementa una bomba simple que explota y se destruye
 */
UCLASS()
class BOMBERMAN_012025_API ABombaNormal : public ABombaBase
{
    GENERATED_BODY()

public:
    ABombaNormal();

    // Implementaci�n del m�todo Explotar de la interfaz IBomba
    virtual void Explotar() override;

protected:
    // Implementaci�n del m�todo para configurar el material
    virtual void ConfigurarMaterial() override;
};