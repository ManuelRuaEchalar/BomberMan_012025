#pragma once

#include "CoreMinimal.h"
#include "BombaBase.h"
#include "BombaEspecial.generated.h"

/**
 * Clase BombaEspecial - Representa un composite en el patrón Composite
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
    // Implementación del método Explotar de la interfaz IBomba
    virtual void Explotar() override;

    // Implementación de métodos para manejar bombas hijas
    virtual void AgregarBomba(ABombaBase* Bomba) override;
    virtual void RemoverBomba(ABombaBase* Bomba) override;
    virtual TArray<ABombaBase*> ObtenerBombas() override;

protected:
    // Implementación del método para configurar el material
    virtual void ConfigurarMaterial() override;

private:
    // Método para crear las bombas hijas automáticamente
    void CrearBombasHijas();

    // Método para programar la explosión de bombas hijas
    void ProgramarExplosionBombasHijas();
};