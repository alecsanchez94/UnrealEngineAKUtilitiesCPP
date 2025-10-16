// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AKComponentForGame.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class AUDIOUTILITIES_API UAkComponentForGame : public UAkComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAkComponentForGame(const class FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	void PlayAudioFromSoftObjectPtr(TSoftObjectPtr<UAkAudioEvent> Event);
};
