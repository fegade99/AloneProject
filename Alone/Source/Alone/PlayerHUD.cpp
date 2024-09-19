// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"
#include <Subsystems/PanelExtensionSubsystem.h>

APlayerHUD::APlayerHUD()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> Crosshair(TEXT("/Game/HUD/Crosshairs/11_separated-cross_3_2xV2"));
	if (Crosshair.Object) {
		CrosshairTexture = Crosshair.Object;
	}
	
}

void APlayerHUD::DrawHUD()
{

	Super::DrawHUD();
	if (CrosshairTexture) {
		float ScreenX = (Canvas->SizeX/2)-25;
		float ScreenY = (Canvas->SizeY/2)-25;
		DrawTexture(CrosshairTexture, ScreenX, ScreenY, 50, 50, 0, 0, 1, 1);
	}

}


