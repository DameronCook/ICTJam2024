// Copyright Epic Games, Inc. All Rights Reserved.

#include "ICTJam2024GameMode.h"
#include "ICTJam2024Character.h"
#include "UObject/ConstructorHelpers.h"

AICTJam2024GameMode::AICTJam2024GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
