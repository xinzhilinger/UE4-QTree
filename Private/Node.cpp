// Fill out your copyright notice in the Description page of Project Settings.


#include "Node.h"
#include "DrawDebugHelpers.h"
#include "Tree.h"


Node::Node(Bounds* bound, int layer,Tree* belongTree)
{
	this->bound = bound;
	this->layer = layer;
	this->belongTree = belongTree;
	Tools::DrawBounds(belongTree->object, bound);
}

Node::~Node()
{
	delete(bound);
}

void Node::InsertNode(AActor* actor)
{
	if (layer + 1 == belongTree->maxLayer)
	{
		actorDatas.Add(actor);
		return;
	}
	if (isNillNode)
	{
		actorDatas.Add(actor);
		isNillNode = false;
		return;
	}
	if (nodeChilds.Num() == 0 && layer + 1 < belongTree->maxLayer)
	{
		CreateChilds();
		for (auto& Elem : nodeChilds)
		{
			if (Tools::IsActorInBounds(actorDatas[0], Elem->bound))
			{
				Elem->InsertNode(actorDatas[0]);
				break;
			}
		}
		actorDatas.Empty();		
	}
	for (auto& Elem : nodeChilds)
	{
		if (Tools::IsActorInBounds(actor, Elem->bound))
		{
			Elem->InsertNode(actor);

		}
	}
	
	
}

void Node::CreateChilds()
{
	for (int i = -1;i<=1;i += 2)
	{
		for (int j = -1;j<=1;j += 2)
		{
			FVector centerOffset(bound->size.X / 4 * i,  bound->size.Y / 4 * j,0);
			FVector cSize(bound->size.X / 2, bound->size.Y/2, bound->size.Z);
			Bounds* boundCopy=new Bounds(bound->centerPos + centerOffset, cSize);
			Node* node = new Node(boundCopy, layer+1,belongTree);
			nodeChilds.Add(node);
		}
	}
	
}
void Node::RefreshNode()
{
	for (auto& item : nodeChilds)
	{
	}
}




