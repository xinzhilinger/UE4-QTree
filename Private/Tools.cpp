// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools.h"
#include "DrawDebugHelpers.h"
#include "MianRootRun.h"
#include "Kismet/KismetSystemLibrary.h"



Tools::Tools()
{
	
}

Tools::~Tools()
{

}

void Tools::DrawBounds(UObject* pawn,Bounds* bounds)
{
	FColor color(rand() % 256, rand() % 256, rand() % 256,255);
	UKismetSystemLibrary::DrawDebugBox(pawn,bounds->centerPos,bounds->size/2, FColor::Red);
	
}

bool Tools::IsActorInBounds(AActor* actor, Bounds* bound)
{
	FVector actorPos = actor->GetActorLocation();
	if (abs(actorPos.X - bound->centerPos.X)*2 > bound->size.X) return false;
	if (abs(actorPos.Y - bound->centerPos.Y)*2 > bound->size.Y) return false;
	if (abs(actorPos.Z - bound->centerPos.Z)*2 > bound->size.Z) return false;
	return true;
}

void Tools::TestDemo(AActor& actor)
{
	FVector actorPos = actor.GetActorLocation();
}
