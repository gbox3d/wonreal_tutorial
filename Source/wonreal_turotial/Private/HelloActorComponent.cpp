// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloActorComponent.h"

// Sets default values for this component's properties
UHelloActorComponent::UHelloActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHelloActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHelloActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHelloActorComponent::sayHello()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello from UHelloActorComponent!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello, Unreal!"));
	}

}
