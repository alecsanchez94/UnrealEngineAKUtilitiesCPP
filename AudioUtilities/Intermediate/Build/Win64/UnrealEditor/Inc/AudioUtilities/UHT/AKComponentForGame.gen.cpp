// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioUtilities/AudioSystem/AKComponentForGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKComponentForGame() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
AUDIOUTILITIES_API UClass* Z_Construct_UClass_UAkComponentForGame();
AUDIOUTILITIES_API UClass* Z_Construct_UClass_UAkComponentForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioUtilities();
// End Cross Module References

// Begin Class UAkComponentForGame
void UAkComponentForGame::StaticRegisterNativesUAkComponentForGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkComponentForGame);
UClass* Z_Construct_UClass_UAkComponentForGame_NoRegister()
{
	return UAkComponentForGame::StaticClass();
}
struct Z_Construct_UClass_UAkComponentForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AudioSystem/AKComponentForGame.h" },
		{ "ModuleRelativePath", "AudioSystem/AKComponentForGame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponentForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkComponentForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponentForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkComponentForGame_Statics::ClassParams = {
	&UAkComponentForGame::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponentForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkComponentForGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkComponentForGame()
{
	if (!Z_Registration_Info_UClass_UAkComponentForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkComponentForGame.OuterSingleton, Z_Construct_UClass_UAkComponentForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkComponentForGame.OuterSingleton;
}
template<> AUDIOUTILITIES_API UClass* StaticClass<UAkComponentForGame>()
{
	return UAkComponentForGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponentForGame);
UAkComponentForGame::~UAkComponentForGame() {}
// End Class UAkComponentForGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_AudioUtilities_Source_AudioUtilities_AudioSystem_AKComponentForGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkComponentForGame, UAkComponentForGame::StaticClass, TEXT("UAkComponentForGame"), &Z_Registration_Info_UClass_UAkComponentForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkComponentForGame), 2998040690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_AudioUtilities_Source_AudioUtilities_AudioSystem_AKComponentForGame_h_663552798(TEXT("/Script/AudioUtilities"),
	Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_AudioUtilities_Source_AudioUtilities_AudioSystem_AKComponentForGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RiderProjects_Prototype86_community_Plugins_AudioUtilities_Source_AudioUtilities_AudioSystem_AKComponentForGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
