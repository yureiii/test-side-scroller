// Fill out your copyright notice in the Description page of Project Settings.


#include "IceProjectile.h"

// Sets default values
AIceProjectile::AIceProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIceProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIceProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

