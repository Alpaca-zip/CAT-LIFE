// Copyright Epic Games, Inc. All Rights Reserved.

#include "cat_lifeGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "cat_lifeCharacter.h"

Acat_lifeGameMode::Acat_lifeGameMode() {
  // set default pawn class to our Blueprinted character
  static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(
      TEXT("/Game/cat_life/Blueprints/BP_cat"));
  if (PlayerPawnBPClass.Class != NULL) {
    DefaultPawnClass = PlayerPawnBPClass.Class;
  }
}
