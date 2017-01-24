// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SleazeBall.h"
#include "SleazeBallGameMode.h"
#include "SleazeBallHUD.h"
#include "SleazeBallCharacter.h"

ASleazeBallGameMode::ASleazeBallGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASleazeBallHUD::StaticClass();
}
