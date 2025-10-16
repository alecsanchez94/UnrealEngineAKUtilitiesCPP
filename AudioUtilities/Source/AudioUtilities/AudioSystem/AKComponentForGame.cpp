// Fill out your copyright notice in the Description page of Project Settings.


#include "AKComponentForGame.h"

#include "AkAudioEvent.h"
#include "Wwise/API/WwiseSoundEngineAPI.h"
#include "Wwise/API/WwiseSoundEngineAPI.h"




UAkComponentForGame::UAkComponentForGame(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UAkComponentForGame::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAkComponentForGame::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAkComponentForGame::PlayAudioFromSoftObjectPtr(TSoftObjectPtr<UAkAudioEvent> Event)
{
	UAkAudioEvent* EventPtr = Event.Get();
	if (!EventPtr)
	{
		return;
	}
	
	if (auto* SoundEngine = IWwiseSoundEngineAPI::Get())
	{

		SoundEngine->PostEvent(EventPtr->GetWwiseShortID(), GetAkGameObjectID());
	}
	
}

