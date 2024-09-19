// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/ProgressBar.h"
#include "PlayerHUD.generated.h"



/**
 * 
 */
UCLASS()
class ALONE_API APlayerHUD : public AHUD
{
	GENERATED_BODY()

	UTexture2D* CrosshairTexture;



public:

	APlayerHUD();
	virtual void DrawHUD() override;
	
};
