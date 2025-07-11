// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorHeredado.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AActorHeredado::AActorHeredado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>("Root");
    ChildSceneComponent = CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
    BoxOne = CreateDefaultSubobject<UStaticMeshComponent>("BoxOne");
    BoxTwo = CreateDefaultSubobject<UStaticMeshComponent>("BoxTwo");
    // Get a reference to the cube mesh
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    // Give both boxes a mesh
    if (MeshAsset.Object != nullptr)
    {
        BoxOne->SetStaticMesh(MeshAsset.Object);
        BoxTwo->SetStaticMesh(MeshAsset.Object);
    }
    RootComponent = Root;
    // Set up the object's hierarchy
    BoxOne->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
    BoxTwo->AttachToComponent(ChildSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
    ChildSceneComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);// Offset and scale the child from the root
    ChildSceneComponent->SetRelativeTransform(
        FTransform(FRotator(0, 0, 0),
            FVector(250, 0, 0),
            FVector(0.1f))
    );
}

// Called when the game starts or when spawned
void AActorHeredado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorHeredado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

