// MHasKV3TransferPolymorphicClassname
class CNavPathCost : public INavPathCost
{
	bool m_bAllowBlockingViaFloorAreaCost;
	bool m_bAllowLadders; // = true
	float32 m_flMaxDropDown; // = -1
	float32 m_flMaxClimbUp; // = -1
	float32 m_flDropDownPenaltyCostBase; // = 1000
	float32 m_flDropDownPenaltyCostScalar; // = 4
	float32 m_flClimbUpPenaltyCostBase;
	float32 m_flClimbUpPenaltyCostScalar;
	float32 m_flStepHeight; // = 18
	bool m_bCanFly;
	bool m_bCanSwim;
	float32 m_flWaterToGroundMaxHeight; // = 100
	float32 m_flGroundToWaterMaxHeight; // = 100
	float32 m_flGroundToWaterTransitionDistance; // = -1
	float32 m_flWaterToGroundTransitionDistance; // = -1
	float32 m_flFlyingTransitionTolerance; // = 140
	bool m_bOptimizeFlySpacePathfinds; // = true
	bool m_bStringPullFlySpacePathfinds;
	bool m_bSupportsTransitions;
	float32 m_flTransitionPenalty; // = 200
};
