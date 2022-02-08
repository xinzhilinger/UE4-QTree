// Fill out your copyright notice in the Description page of Project Settings.


#include "MianRootRun.h"
#include "Tree.h"
#include "Node.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ObjData.h"


// Sets default values
AMianRootRun::AMianRootRun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMianRootRun::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AMianRootRun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CreateTree();


}

void AMianRootRun::CreateTree()
{
	Bounds* bounds = new Bounds(centerPos, size);

	Tree* tree = new Tree(bounds, 4,object);

	for (auto& Elem : datas)
	{
		tree->Insert(Elem);
	}
	
}

