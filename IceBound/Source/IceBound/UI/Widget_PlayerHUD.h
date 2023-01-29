#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_PlayerHUD.generated.h"

UCLASS()
class ICEBOUND_API UWidget_PlayerHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void UpdateHealthBar(int32 _currentHealth, int32 _maxHealth);
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget))
	class UProgressBar* HealthBar;
};
