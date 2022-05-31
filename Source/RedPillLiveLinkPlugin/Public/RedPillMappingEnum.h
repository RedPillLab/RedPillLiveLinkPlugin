// Copyright Red Pill Lab, Ltd. All Rights Reserved.
#pragma once
#include "RedPillMappingEnum.generated.h"

UENUM(BlueprintType)
enum class ERedPillMapping : uint8 {
	Hips = 0		UMETA(DisplayName = "Hips"),
	Spine			UMETA(DisplayName = "Spine"),
	Spine1			UMETA(DisplayName = "Spine1"),
	Spine2			UMETA(DisplayName = "Spine2"),
	Spine3			UMETA(DisplayName = "Spine3"),
	Neck			UMETA(DisplayName = "Neck"),
	Head			UMETA(DisplayName = "Head"),
	LeftShoulder	UMETA(DisplayName = "LeftShoulder"),
	LeftUpperArm	UMETA(DisplayName = "LeftUpperArm"),
	LeftLowerArm	UMETA(DisplayName = "LeftLowerArm"),
	LeftHand		UMETA(DisplayName = "LeftHand"),
	RightShoulder	UMETA(DisplayName = "RightShoulder"),
	RightUpperArm	UMETA(DisplayName = "RightUpperArm"),
	RightLowerArm	UMETA(DisplayName = "RightLowerArm"),
	RightHand		UMETA(DisplayName = "RightHand"),
	LeftUpperLeg	UMETA(DisplayName = "LeftUpperLeg"),
	LeftLowerLeg	UMETA(DisplayName = "LeftLowerLeg"),
	LeftFoot		UMETA(DisplayName = "LeftFoot"),
	LeftToe			UMETA(DisplayName = "LeftToe"),
	RightUpperLeg	UMETA(DisplayName = "RightUpperLeg"),
	RightLowerLeg	UMETA(DisplayName = "RightLowerLeg"),
	RightFoot		UMETA(DisplayName = "RightFoot"),
	RightToe		UMETA(DisplayName = "RightToe"),
	LeftPinky1		UMETA(DisplayName = "LeftPinky1"),
	LeftPinky2		UMETA(DisplayName = "LeftPinky2"),
	LeftPinky3		UMETA(DisplayName = "LeftPinky3"),
	LeftRing1		UMETA(DisplayName = "LeftRing1"),
	LeftRing2		UMETA(DisplayName = "LeftRing2"),
	LeftRing3		UMETA(DisplayName = "LeftRing3"),
	LeftMiddle1		UMETA(DisplayName = "LeftMiddle1"),
	LeftMiddle2		UMETA(DisplayName = "LeftMiddle2"),
	LeftMiddle3		UMETA(DisplayName = "LeftMiddle3"),
	LeftIndex1		UMETA(DisplayName = "LeftIndex1"),
	LeftIndex2		UMETA(DisplayName = "LeftIndex2"),
	LeftIndex3		UMETA(DisplayName = "LeftIndex3"),
	LeftThumb1		UMETA(DisplayName = "LeftThumb1"),
	LeftThumb2		UMETA(DisplayName = "LeftThumb2"),
	LeftThumb3		UMETA(DisplayName = "LeftThumb3"),
	RightPinky1		UMETA(DisplayName = "RightPinky1"),
	RightPinky2		UMETA(DisplayName = "RightPinky2"),
	RightPinky3		UMETA(DisplayName = "RightPinky3"),
	RightRing1		UMETA(DisplayName = "RightRing1"),
	RightRing2		UMETA(DisplayName = "RightRing2"),
	RightRing3		UMETA(DisplayName = "RightRing3"),
	RightMiddle1	UMETA(DisplayName = "RightMiddle1"),
	RightMiddle2	UMETA(DisplayName = "RightMiddle2"),
	RightMiddle3	UMETA(DisplayName = "RightMiddle3"),
	RightIndex1		UMETA(DisplayName = "RightIndex1"),
	RightIndex2		UMETA(DisplayName = "RightIndex2"),
	RightIndex3		UMETA(DisplayName = "RightIndex3"),
	RightThumb1		UMETA(DisplayName = "RightThumb1"),
	RightThumb2		UMETA(DisplayName = "RightThumb2"),
	RightThumb3		UMETA(DisplayName = "RightThumb3"),
	None				UMETA(DisplayName = "None"),
	Count
};



UENUM()
enum class ERedPillRetargetNamingConvention : uint8 {
	// Default Manually set bone naming map 
	Default = 0		UMETA(DisplayName = "Manual"),
	// Use bone map used in Unreal engine and Metahuman
	Metahuman			UMETA(DisplayName = "Unreal/Metahuman"),

};