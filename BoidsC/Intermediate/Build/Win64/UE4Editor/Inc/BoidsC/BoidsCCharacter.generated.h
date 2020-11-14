// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOIDSC_BoidsCCharacter_generated_h
#error "BoidsCCharacter.generated.h already included, missing '#pragma once' in BoidsCCharacter.h"
#endif
#define BOIDSC_BoidsCCharacter_generated_h

#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_SPARSE_DATA
#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_RPC_WRAPPERS
#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoidsCCharacter(); \
	friend struct Z_Construct_UClass_ABoidsCCharacter_Statics; \
public: \
	DECLARE_CLASS(ABoidsCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoidsC"), NO_API) \
	DECLARE_SERIALIZER(ABoidsCCharacter)


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoidsCCharacter(); \
	friend struct Z_Construct_UClass_ABoidsCCharacter_Statics; \
public: \
	DECLARE_CLASS(ABoidsCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoidsC"), NO_API) \
	DECLARE_SERIALIZER(ABoidsCCharacter)


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoidsCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoidsCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidsCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidsCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidsCCharacter(ABoidsCCharacter&&); \
	NO_API ABoidsCCharacter(const ABoidsCCharacter&); \
public:


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoidsCCharacter(ABoidsCCharacter&&); \
	NO_API ABoidsCCharacter(const ABoidsCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoidsCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoidsCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoidsCCharacter)


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ABoidsCCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABoidsCCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ABoidsCCharacter, CursorToWorld); }


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_9_PROLOG
#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_SPARSE_DATA \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_RPC_WRAPPERS \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_INCLASS \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BoidsC_Source_BoidsC_BoidsCCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_SPARSE_DATA \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BoidsC_Source_BoidsC_BoidsCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOIDSC_API UClass* StaticClass<class ABoidsCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BoidsC_Source_BoidsC_BoidsCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
