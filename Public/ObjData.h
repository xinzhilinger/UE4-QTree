// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjData.generated.h"

UCLASS()
class QTREE_API AObjData : public AActor
{
	GENERATED_BODY()

public:


	
public:	
	// Sets default values for this actor's properties
	AObjData();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
