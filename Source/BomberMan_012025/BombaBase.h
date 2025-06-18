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

    // Componente de malla estática
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // Componente del sistema de partículas para la explosión
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UParticleSystemComponent* ExplosionParticleComponent;

    // Factor de escala para bombas más pequeñas
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
    float FactorEscala;

public:
    // Implementación de la interfaz IBomba
    virtual void Explotar() override PURE_VIRTUAL(ABombaBase::Explotar, );

    // Setter para el factor de escala
    void SetFactorEscala(float NuevoFactor);

protected:
    // Método helper para reproducir el efecto de explosión
    void ReproducirExplosion();

    // Método helper para configurar el material
    virtual void ConfigurarMaterial() PURE_VIRTUAL(ABombaBase::ConfigurarMaterial, );
};