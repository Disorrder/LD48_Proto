// Copyright Epic Games, Inc. All Rights Reserved.

#include "LD48_ProtoGameMode.h"
#include "LD48_ProtoHUD.h"
#include "LD48_ProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALD48_ProtoGameMode::ALD48_ProtoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALD48_ProtoHUD::StaticClass();
}
