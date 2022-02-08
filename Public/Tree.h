// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools.h"
#include "Node.h"
/**
 * 
 */


class QTREE_API Tree
{
public:
	Node* Root;
	int maxLayer;
	Bounds* bound;
	UObject* object;

public:
	Tree(Bounds* bound,int maxLayer, UObject* object);
	~Tree();
	void Insert(AActor* actor);

};
