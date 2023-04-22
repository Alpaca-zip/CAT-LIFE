// Copyright Epic Games, Inc. All Rights Reserved.

#include "cat_lifeGameMode.h"
#include "cat_lifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acat_lifeGameMode::Acat_lifeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
