// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanks_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tanks;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tanks()
	{
		if (!Z_Registration_Info_UPackage__Script_Tanks.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tanks",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1B2CD8F1,
				0xD5A9EC2A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tanks.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tanks.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tanks(Z_Construct_UPackage__Script_Tanks, TEXT("/Script/Tanks"), Z_Registration_Info_UPackage__Script_Tanks, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1B2CD8F1, 0xD5A9EC2A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
