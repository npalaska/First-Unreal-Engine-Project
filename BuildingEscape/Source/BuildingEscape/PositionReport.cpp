// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	
	FString ObjectName = GetOwner()->GetName();
	float x = GetOwner()->GetActorLocation().X;
	float y = GetOwner()->GetActorLocation().Y;
	float z = GetOwner()->GetActorLocation().Z;
	UE_LOG(LogTemp, Warning, TEXT("This is a msg from %s and its located at x: %f , y: %f , z: %f"), *ObjectName, x, y, z);
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

