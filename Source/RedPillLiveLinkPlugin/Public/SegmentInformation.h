// Copyright Red Pill Lab, Ltd. All Rights Reserved.

#ifndef SEGMENTINFORMATION_H
#define SEGMENTINFORMATION_H

#include "Containers/Array.h"
#include "UObject/NameTypes.h"

namespace SegmentInformation
{
	const TArray<int32> parentIndex = { -1,0,1,2,3,4,5,4,7,8,9,4,11,12,13,0,15,16,17,0,19,20,21,
										10,23,24,10,26,27,10,29,30,10,32,33,10,35,36,
										14,38,39,14,41,42,14,44,45,14,47,48,14,50,51 };	

	const TArray<FName> SegmentBoneNames = {
													FName("Hips"),
													FName("Spine"),
													FName("Spine1"),
													FName("Spine2"),
													FName("Spine3"),
													FName("Neck"),
													FName("Head"),
													FName("LeftShoulder"),
													FName("LeftUpperArm"),
													FName("LeftLowerArm"),
													FName("LeftHand"),
													FName("RightShoulder"),
													FName("RightUpperArm"),
													FName("RightLowerArm"),
													FName("RightHand"),
													FName("LeftUpperLeg"),
													FName("LeftLowerLeg"),
													FName("LeftFoot"),
													FName("LeftToe"),
													FName("RightUpperLeg"),
													FName("RightLowerLeg"),
													FName("RightFoot"),
													FName("RightToe"),
													FName("LeftPinky1"),
													FName("LeftPinky2"),
													FName("LeftPinky3"),
													FName("LeftRing1"),
													FName("LeftRing2"),
													FName("LeftRing3"),
													FName("LeftMiddle1"),
													FName("LeftMiddle2"),
													FName("LeftMiddle3"),
													FName("LeftIndex1"),
													FName("LeftIndex2"),
													FName("LeftIndex3"),
													FName("LeftThumb1"),
													FName("LeftThumb2"),
													FName("LeftThumb3"),
													FName("RightPinky1"),
													FName("RightPinky2"),
													FName("RightPinky3"),
													FName("RightRing1"),
													FName("RightRing2"),
													FName("RightRing3"),
													FName("RightMiddle1"),
													FName("RightMiddle2"),
													FName("RightMiddle3"),
													FName("RightIndex1"),
													FName("RightIndex2"),
													FName("RightIndex3"),
													FName("RightThumb1"),
													FName("RightThumb2"),
													FName("RightThumb3"),
	};
};

#endif
