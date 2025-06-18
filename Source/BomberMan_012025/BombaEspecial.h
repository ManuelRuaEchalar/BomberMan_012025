#pragma once

#include "CoreMinimal.h"
#include "BombaBase.h"
#include "BombaEspecial.generated.h"

/**
 * Clase BombaEspecial - Representa un composite en el patr�n Composite
 * Contiene otras bombas como componentes hijos
 */
UCLASS()
class BOMBERMAN_012025_API ABombaEspecial : public ABombaBase
{
    GENERATED_BODY()

public:
    ABombaEspecial();

protected:
    virtual void BeginPlay() override;

    // Array de bombas hijas
    UPROPERTY(VisibleAnywhere, Category = "Bombas Hijas")
    TArray<ABombaBase*> BombasHijas;

public:
    // Implementaci�n del m�todo Explotar de la interfaz IBomba
    virtual void Explotar() override;

    // Implementaci�n de m�todos para manejar bombas hijas
    virtual void AgregarBomba(ABombaBase* Bomba) override;
    virtual void RemoverBomba(ABombaBase* Bomba) override;
    virtual TArray<ABombaBase*> ObtenerBombas() override;

protected:
    // Implementaci�n del m�todo para configurar el material
    virtual void ConfigurarMaterial() override;

private:
    // M�todo para crear las bombas hijas autom�ticamente
    void CrearBombasHijas();

    // M�todo para programar la explosi�n de bombas hijas
    void ProgramarExplosionBombasHijas();
};