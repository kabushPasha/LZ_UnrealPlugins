// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LZ_PSO_Checker/Public/LZ_PSO_CheckerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLZ_PSO_CheckerBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LZ_PSO_CHECKER_API UClass* Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary();
LZ_PSO_CHECKER_API UClass* Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_LZ_PSO_Checker();
// End Cross Module References

// Begin Class ULZ_PSO_CheckerBPLibrary Function Get_NumCompilingShaders
struct Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics
{
	struct LZ_PSO_CheckerBPLibrary_eventGet_NumCompilingShaders_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shaders" },
		{ "ModuleRelativePath", "Public/LZ_PSO_CheckerBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LZ_PSO_CheckerBPLibrary_eventGet_NumCompilingShaders_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary, nullptr, "Get_NumCompilingShaders", nullptr, nullptr, Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::LZ_PSO_CheckerBPLibrary_eventGet_NumCompilingShaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::LZ_PSO_CheckerBPLibrary_eventGet_NumCompilingShaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULZ_PSO_CheckerBPLibrary::execGet_NumCompilingShaders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULZ_PSO_CheckerBPLibrary::Get_NumCompilingShaders();
	P_NATIVE_END;
}
// End Class ULZ_PSO_CheckerBPLibrary Function Get_NumCompilingShaders

// Begin Class ULZ_PSO_CheckerBPLibrary Function LZ_PSO_CheckerSampleFunction
struct Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics
{
	struct LZ_PSO_CheckerBPLibrary_eventLZ_PSO_CheckerSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LZ_PSO_CheckerTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "LZ_PSO_Checker sample test testing" },
		{ "ModuleRelativePath", "Public/LZ_PSO_CheckerBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LZ_PSO_CheckerBPLibrary_eventLZ_PSO_CheckerSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LZ_PSO_CheckerBPLibrary_eventLZ_PSO_CheckerSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary, nullptr, "LZ_PSO_CheckerSampleFunction", nullptr, nullptr, Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::LZ_PSO_CheckerBPLibrary_eventLZ_PSO_CheckerSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::LZ_PSO_CheckerBPLibrary_eventLZ_PSO_CheckerSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULZ_PSO_CheckerBPLibrary::execLZ_PSO_CheckerSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULZ_PSO_CheckerBPLibrary::LZ_PSO_CheckerSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class ULZ_PSO_CheckerBPLibrary Function LZ_PSO_CheckerSampleFunction

// Begin Class ULZ_PSO_CheckerBPLibrary
void ULZ_PSO_CheckerBPLibrary::StaticRegisterNativesULZ_PSO_CheckerBPLibrary()
{
	UClass* Class = ULZ_PSO_CheckerBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get_NumCompilingShaders", &ULZ_PSO_CheckerBPLibrary::execGet_NumCompilingShaders },
		{ "LZ_PSO_CheckerSampleFunction", &ULZ_PSO_CheckerBPLibrary::execLZ_PSO_CheckerSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULZ_PSO_CheckerBPLibrary);
UClass* Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_NoRegister()
{
	return ULZ_PSO_CheckerBPLibrary::StaticClass();
}
struct Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "LZ_PSO_CheckerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LZ_PSO_CheckerBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_Get_NumCompilingShaders, "Get_NumCompilingShaders" }, // 3566669863
		{ &Z_Construct_UFunction_ULZ_PSO_CheckerBPLibrary_LZ_PSO_CheckerSampleFunction, "LZ_PSO_CheckerSampleFunction" }, // 3842356896
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULZ_PSO_CheckerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LZ_PSO_Checker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::ClassParams = {
	&ULZ_PSO_CheckerBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary()
{
	if (!Z_Registration_Info_UClass_ULZ_PSO_CheckerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULZ_PSO_CheckerBPLibrary.OuterSingleton, Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULZ_PSO_CheckerBPLibrary.OuterSingleton;
}
template<> LZ_PSO_CHECKER_API UClass* StaticClass<ULZ_PSO_CheckerBPLibrary>()
{
	return ULZ_PSO_CheckerBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULZ_PSO_CheckerBPLibrary);
ULZ_PSO_CheckerBPLibrary::~ULZ_PSO_CheckerBPLibrary() {}
// End Class ULZ_PSO_CheckerBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_PackagedPlugins_LZ_PSO_Checker_HostProject_Plugins_LZ_PSO_Checker_Source_LZ_PSO_Checker_Public_LZ_PSO_CheckerBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULZ_PSO_CheckerBPLibrary, ULZ_PSO_CheckerBPLibrary::StaticClass, TEXT("ULZ_PSO_CheckerBPLibrary"), &Z_Registration_Info_UClass_ULZ_PSO_CheckerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULZ_PSO_CheckerBPLibrary), 956366385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_PackagedPlugins_LZ_PSO_Checker_HostProject_Plugins_LZ_PSO_Checker_Source_LZ_PSO_Checker_Public_LZ_PSO_CheckerBPLibrary_h_1890048239(TEXT("/Script/LZ_PSO_Checker"),
	Z_CompiledInDeferFile_FID_Unreal_PackagedPlugins_LZ_PSO_Checker_HostProject_Plugins_LZ_PSO_Checker_Source_LZ_PSO_Checker_Public_LZ_PSO_CheckerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_PackagedPlugins_LZ_PSO_Checker_HostProject_Plugins_LZ_PSO_Checker_Source_LZ_PSO_Checker_Public_LZ_PSO_CheckerBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
