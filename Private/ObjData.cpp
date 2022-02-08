// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjData.h"

// Sets default values
AObjData::AObjData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AObjData::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

