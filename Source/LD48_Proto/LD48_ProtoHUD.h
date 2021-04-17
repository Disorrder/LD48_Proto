// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LD48_ProtoHUD.generated.h"

UCLASS()
class ALD48_ProtoHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALD48_ProtoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

