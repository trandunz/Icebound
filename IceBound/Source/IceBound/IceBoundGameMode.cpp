#include "IceBoundGameMode.h"
#include "IceBoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceBoundGameMode::AIceBoundGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_IceBoundCharacter.BP_IceBoundCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
