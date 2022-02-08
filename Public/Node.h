// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools.h"

class Tree;
class QTREE_API Node
{
public:
	Bounds* bound;
	int layer; 
	Tree* belongTree;
	TArray<Node*> nodeChilds;
	TArray<AActor*> actorDatas;
	bool isNillNode=true;
	
public:
	Node(Bounds*,int,Tree* tree);
	~Node();
	void InsertNode(AActor* actor);
	void CreateChilds();
	void RefreshNode();
};
