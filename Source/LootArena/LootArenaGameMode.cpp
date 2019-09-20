// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LootArenaGameMode.h"
#include "LootArenaHUD.h"
#include "LootArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALootArenaGameMode::ALootArenaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALootArenaHUD::StaticClass();
}
