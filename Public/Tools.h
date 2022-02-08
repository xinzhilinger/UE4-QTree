// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


struct Bounds
{
public:
	FVector centerPos;
	FVector size;
	Bounds(FVector centerPos, FVector size)
	{
		this->centerPos = centerPos;
		this->size = size;
	}

};
/**
 * 
 */
class QTREE_API Tools
{


public:
	Tools();
	~Tools();



public:
	static void DrawBounds(UObject* pawn, Bounds* bounds);
	static bool IsActorInBounds(AActor* actor, Bounds* bound);
	static void TestDemo(AActor& actor);
	
};


