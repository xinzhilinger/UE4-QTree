// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MianRootRun.generated.h"

UCLASS()
class QTREE_API AMianRootRun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMianRootRun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
public:
	UPROPERTY(EditAnywhere)
	FVector centerPos;
	UPROPERTY(EditAnywhere)
	FVector size;
	UPROPERTY(EditAnywhere)
	UObject* object;
	UPROPERTY(EditAnywhere)
	TSet<AActor*> datas;
	AActor* actor;

	

public:
	void CreateTree();

	

};
