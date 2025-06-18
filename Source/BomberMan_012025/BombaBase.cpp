#include "BombaBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

ABombaBase::ABombaBase()
{
    PrimaryActorTick.bCanEverTick = false;
    FactorEscala = 1.0f;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Cargar la malla de la esfera
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (SphereMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(SphereMeshAsset.Object);
    }

    // Crear el componente de sistema de partículas
    ExplosionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionParticleComponent"));
    ExplosionParticleComponent->SetupAttachment(RootComponent);

    // Cargar el sistema de partículas de explosión
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ExplosionParticleAsset.Succeeded())
    {
        ExplosionParticleComponent->SetTemplate(ExplosionParticleAsset.Object);
        ExplosionParticleComponent->bAutoActivate = false; // No activar automáticamente
    }
}

void ABombaBase::BeginPlay()
{
    Super::BeginPlay();

    // Aplicar el factor de escala
    SetActorScale3D(FVector(FactorEscala));

    // Configurar el material específico de cada tipo de bomba
    ConfigurarMaterial();
}

void ABombaBase::SetFactorEscala(float NuevoFactor)
{
    FactorEscala = NuevoFactor;
    SetActorScale3D(FVector(FactorEscala));
}

void ABombaBase::ReproducirExplosion()
{
    if (ExplosionParticleComponent)
    {
        ExplosionParticleComponent->Activate();
    }
}