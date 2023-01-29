#include "EntityComponent.h"

UEntityComponent::UEntityComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UEntityComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}


void UEntityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

