// Fill out your copyright notice in the Description page of Project Settings.


#include "GitActor.h"

// it's a constructor, baby!!
AGitActor::AGitActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGitActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGitActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ~whatever~
}

