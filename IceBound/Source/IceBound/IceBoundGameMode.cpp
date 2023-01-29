// Copyright Epic Games, Inc. All Rights Reserved.

#include "IceBoundGameMode.h"
#include "IceBoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceBoundGameMode::AIceBoundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
