// Fill out your copyright notice in the Description page of Project Settings.
#include "GoombaEnemigo.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGoombaEnemigo::AGoombaEnemigo()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Crear componente ra�z
    RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = RootComp;

    // Crear y configurar el componente Static Mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);

    // Cargar el mesh del Goomba desde el contenido
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Goomba.Goomba'"));

    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
        MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

    // Inicializar propiedades de movimiento
    MovementSpeed = 100.0f;
    PatrolRadius = 200.0f;
    bMovingRight = true;
}

// Constructor de copia para el patr�n Prototype
AGoombaEnemigo::AGoombaEnemigo(const AGoombaEnemigo* Prototype)
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Crear componente ra�z
    RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = RootComp;

    // Crear y configurar el componente Static Mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);

    // Copiar el mesh del prototipo
    if (Prototype && Prototype->MeshComponent && Prototype->MeshComponent->GetStaticMesh())
    {
        MeshComponent->SetStaticMesh(Prototype->MeshComponent->GetStaticMesh());
        MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

    // Copiar propiedades del prototipo
    if (Prototype)
    {
        MovementSpeed = Prototype->MovementSpeed;
        PatrolRadius = Prototype->PatrolRadius;
        bMovingRight = Prototype->bMovingRight;
    }
    else
    {
        // Inicializar propiedades por defecto si no hay prototipo
        MovementSpeed = 100.0f;
        PatrolRadius = 200.0f;
        bMovingRight = true;
    }
}

// Implementaci�n del m�todo Clone de la interfaz IGoombaPrototype
AActor* AGoombaEnemigo::Clone(FVector SpawnLocation)
{
    UWorld* World = GetWorld();
    if (!World)
    {
        return nullptr;
    }

    // Preparar los par�metros para el spawn
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Crear un nuevo Goomba en la ubicaci�n especificada
    AGoombaEnemigo* Clone = World->SpawnActor<AGoombaEnemigo>(GetClass(), SpawnLocation, GetActorRotation(), SpawnParams);

    if (Clone)
    {
        // Copiar las propiedades desde este objeto al clon
        Clone->SetMovementSpeed(MovementSpeed);
        Clone->SetPatrolRadius(PatrolRadius);
        Clone->bMovingRight = bMovingRight;

        // Copiar el mesh si existe
        if (MeshComponent && MeshComponent->GetStaticMesh())
        {
            Clone->MeshComponent->SetStaticMesh(MeshComponent->GetStaticMesh());
        }

        // Iniciar la patrulla para el clon
        Clone->StartPatrol();
    }

    return Clone;
}

// Called when the game starts or when spawned
void AGoombaEnemigo::BeginPlay()
{
    Super::BeginPlay();

    // Guardar la posici�n inicial
    InitialPosition = GetActorLocation();

    // Iniciar el movimiento de patrulla
    StartPatrol();
}

// Called every frame
void AGoombaEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Implementar el movimiento de patrulla (ir a la derecha, dar la vuelta y retornar)
    FVector CurrentLocation = GetActorLocation();
    FVector Direction;

    if (bMovingRight)
    {
        Direction = FVector(1.0f, 0.0f, 0.0f); // Direcci�n hacia la derecha

        // Si alcanza el l�mite del radio de patrulla, cambiar direcci�n
        if (CurrentLocation.X >= InitialPosition.X + PatrolRadius)
        {
            bMovingRight = false;

            // Girar el Goomba 180 grados
            SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
        }
    }
    else
    {
        Direction = FVector(-1.0f, 0.0f, 0.0f); // Direcci�n hacia la izquierda

        // Si vuelve al punto inicial o sobrepasa el l�mite izquierdo, cambiar direcci�n
        if (CurrentLocation.X <= InitialPosition.X - PatrolRadius)
        {
            bMovingRight = true;

            // Girar el Goomba a la posici�n original
            SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
        }
    }

    // Calcular el desplazamiento en este frame
    FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

    // Actualizar la posici�n del actor
    SetActorLocation(NewLocation);
}

// M�todo para iniciar el movimiento de patrulla
void AGoombaEnemigo::StartPatrol()
{
    // Guardar la posici�n actual como punto inicial de patrulla
    InitialPosition = GetActorLocation();

    // Configurar para comenzar movi�ndose hacia la derecha
    bMovingRight = true;

    // Asegurar que el Tick est� habilitado
    SetActorTickEnabled(true);
}

// M�todo para detener el movimiento de patrulla
void AGoombaEnemigo::StopPatrol()
{
    // Desactivar el Tick para detener el movimiento
    SetActorTickEnabled(false);
}
