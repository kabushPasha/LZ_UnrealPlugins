// Copyright Epic Games, Inc. All Rights Reserved.

#include "LZ_PSO_Checker.h"

#define LOCTEXT_NAMESPACE "FLZ_PSO_CheckerModule"

void FLZ_PSO_CheckerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FLZ_PSO_CheckerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLZ_PSO_CheckerModule, LZ_PSO_Checker)