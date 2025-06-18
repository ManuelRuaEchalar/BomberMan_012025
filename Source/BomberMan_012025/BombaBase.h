#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Bomba.h"
#include "BombaBase.generated.h"

UCLASS(Abstract)
class BOMBERMAN_012025_API ABombaBase : public AActor, public IBomba
{
    GENERATED_BODY()

public:
    ABombaBase();

protected:
    virtual void BeginPlay() override;

    // Componente de malla est�tica
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // Componente del sistema de part�culas para la explosi�n
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UParticleSystemComponent* ExplosionParticleComponent;

    // Factor de escala para bombas m�s peque�as
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    float FactorEscala;

public:
    // Implementaci�n de la interfaz IBomba
    virtual void Explotar() override PURE_VIRTUAL(ABombaBase::Explotar, );

    // Setter para el factor de escala
    void SetFactorEscala(float NuevoFactor);

protected:
    // M�todo helper para reproducir el efecto de explosi�n
    void ReproducirExplosion();

    // M�todo helper para configurar el material
    virtual void ConfigurarMaterial() PURE_VIRTUAL(ABombaBase::ConfigurarMaterial, );
};