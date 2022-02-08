// Fill out your copyright notice in the Description page of Project Settings.


#include "Tree.h"
#include "Node.h"


Tree::Tree(Bounds* bound, int maxLayer, UObject* object)
{
	this->bound = bound;
	this->maxLayer = maxLayer;
	this->object = object;
	Root = new Node(bound, 0,this);
}
void Tree::Insert(AActor* actor)
{
	Root->InsertNode(actor);
}


