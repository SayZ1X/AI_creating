// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_creatingGameMode.h"
#include "AI_creatingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_creatingGameMode::AAI_creatingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
