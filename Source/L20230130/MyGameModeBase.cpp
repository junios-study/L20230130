// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass(); 
	PlayerControllerClass = AMyPlayerController::StaticClass();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 3.0f, FColor::Red, TEXT("Hello World"));
	}
}
