#include "Widget_PlayerHUD.h"

#include "Components/ProgressBar.h"

void UWidget_PlayerHUD::UpdateHealthBar(int32 _currentHealth, int32 _maxHealth)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(_currentHealth / _maxHealth);
	}
}
