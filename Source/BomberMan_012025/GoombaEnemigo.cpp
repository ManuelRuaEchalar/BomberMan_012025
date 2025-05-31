// Fill out your copyright notice in the Description page of Project Settings.


#include "GoombaEnemigo.h"

// Sets default values
AGoombaEnemigo::AGoombaEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGoombaEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGoombaEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

