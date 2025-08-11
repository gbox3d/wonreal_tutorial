// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHelloActorComponent.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UMyHelloActorComponent::UMyHelloActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UMyHelloActorComponent::SayHello()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello from MyHelloActorComponent!"));
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Hello from MyHelloActorComponent!"));
}

// Called when the game starts
void UMyHelloActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyHelloActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

