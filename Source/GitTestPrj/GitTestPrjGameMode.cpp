// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestPrjGameMode.h"
#include "GitTestPrjHUD.h"
#include "GitTestPrjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitTestPrjGameMode::AGitTestPrjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGitTestPrjHUD::StaticClass();
}
