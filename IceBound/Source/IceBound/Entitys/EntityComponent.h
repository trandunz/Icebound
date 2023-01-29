#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EntityComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ICEBOUND_API UEntityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEntityComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 CurrentHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 MaxHealth = 100;
};
