// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoombaPrototype.h"
#include "GoombaEnemigo.generated.h"

UCLASS()
class BOMBERMAN_012025_API AGoombaEnemigo : public AActor, public IGoombaPrototype
{
    GENERATED_BODY()
private:
    
    float MovementSpeed;

    float PatrolRadius;

    FVector InitialPosition;

    bool bMovingRight;

public:
    // Sets default values for this actor's properties
    AGoombaEnemigo();

    // Componentes
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USceneComponent* RootComp;

   

    // Método para clonar el Goomba (implementación de la interfaz IGoombaPrototype)
    virtual AActor* Clone(FVector SpawnLocation) override;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Constructor de copia para el patrón Prototype
    AGoombaEnemigo(const AGoombaEnemigo* Prototype);

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Método para iniciar el movimiento de patrulla
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void StartPatrol();

    // Método para detener el movimiento de patrulla
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void StopPatrol();

    // Getter y Setter para las propiedades
    UFUNCTION(BlueprintCallable, Category = "Properties")
    void SetMovementSpeed(float Speed) { MovementSpeed = Speed; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    float GetMovementSpeed() const { return MovementSpeed; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    void SetPatrolRadius(float Radius) { PatrolRadius = Radius; }

    UFUNCTION(BlueprintCallable, Category = "Properties")
    float GetPatrolRadius() const { return PatrolRadius; }
};