// Copyright Epic Games, Inc. All Rights Reserved.

#include "LZ_PSO_CheckerBPLibrary.h"
#include "LZ_PSO_Checker.h"
#include "ShaderPipelineCache.h"

ULZ_PSO_CheckerBPLibrary::ULZ_PSO_CheckerBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float ULZ_PSO_CheckerBPLibrary::LZ_PSO_CheckerSampleFunction(float Param)
{
	return -1;
}

int32 ULZ_PSO_CheckerBPLibrary::Get_NumCompilingShaders()
{
    uint32 num;
    num = FShaderPipelineCache::NumPrecompilesRemaining();
    return num;
}