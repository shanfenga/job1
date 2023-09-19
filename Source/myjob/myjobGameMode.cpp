// Copyright Epic Games, Inc. All Rights Reserved.

#include "myjobGameMode.h"
#include "myjobCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmyjobGameMode::AmyjobGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
