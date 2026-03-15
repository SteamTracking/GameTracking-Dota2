// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FootLockNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_inputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_items":
//	[
//	],
//	"m_hipBoneName": "",
//	"m_flBlendTime": 0.200000,
//	"m_bApplyFootRotationLimits": true,
//	"m_bResetChild": true,
//	"m_ikSolverType": "IKSOLVER_TwoBone",
//	"m_bAlwaysUseFallbackHinge": true,
//	"m_bApplyLegTwistLimits": false,
//	"m_flMaxLegTwist": 45.000000,
//	"m_flStrideCurveScale": 1.000000,
//	"m_flStrideCurveLimitScale": 0.250000,
//	"m_bEnableVerticalCurvedPaths": false,
//	"m_bModulateStepHeight": true,
//	"m_flStepHeightIncreaseScale": 0.000000,
//	"m_flStepHeightDecreaseScale": 1.000000,
//	"m_bEnableHipShift": false,
//	"m_flHipShiftScale": 0.500000,
//	"m_hipShiftDamping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	},
//	"m_bApplyTilt": false,
//	"m_flTiltPlanePitchSpringStrength": 5.000000,
//	"m_flTiltPlaneRollSpringStrength": 5.000000,
//	"m_bEnableLockBreaking": true,
//	"m_flLockBreakTolerance": 0.200000,
//	"m_flLockBreakBlendTime": 0.200000,
//	"m_bEnableStretching": false,
//	"m_flMaxStretchAmount": 2.000000,
//	"m_flStretchExtensionScale": 0.998000,
//	"m_bEnableGroundTracing": false,
//	"m_flTraceAngleBlend": 0.000000,
//	"m_bApplyHipDrop": false,
//	"m_flMaxFootHeight": -12.000000,
//	"m_flExtensionScale": 0.700000,
//	"m_hipDampingSettings":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	},
//	"m_bEnableRootHeightDamping": false,
//	"m_rootHeightDamping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "Spring",
//		"m_fSpeedScale": 12.000000,
//		"m_fFallingSpeedScale": 12.000000
//	},
//	"m_flMaxRootHeightOffset": 100.000000,
//	"m_flMinRootHeightOffset": -100.000000
//}
// MPropertyFriendlyName = "Stride Retargeting"
class CAnimGraphDoc_FootLockNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootLockItem > m_items;
	// MPropertyFriendlyName = "Hip Bone"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_hipBoneName;
	// MPropertyFriendlyName = "Blend Time"
	float32 m_flBlendTime;
	// MPropertyFriendlyName = "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetChild;
	// MPropertyFriendlyName = "IK Solver Type"
	// MPropertyGroupName = "IK"
	// MPropertyAutoRebuildOnChange
	IKSolverType m_ikSolverType;
	// MPropertyFriendlyName = "Always use fallback hinge"
	// MPropertyGroupName = "IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bAlwaysUseFallbackHinge;
	// MPropertyFriendlyName = "Limit Leg Twist"
	// MPropertyGroupName = "IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bApplyLegTwistLimits;
	// MPropertyFriendlyName = "Max Leg Twist Angle"
	// MPropertyGroupName = "IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxLegTwist;
	// MPropertyFriendlyName = "Curve Foot Paths"
	// MPropertyGroupName = "Curve Paths"
	// MPropertyAttributeRange = "0 1"
	float32 m_flStrideCurveScale;
	// MPropertyFriendlyName = "Curve Paths Limit"
	// MPropertyGroupName = "Curve Paths"
	// MPropertyAttributeRange = "0 1"
	float32 m_flStrideCurveLimitScale;
	// MPropertyFriendlyName = "Enable Vertical Curved Paths"
	// MPropertyGroupName = "Curve Paths"
	bool m_bEnableVerticalCurvedPaths;
	// MPropertyFriendlyName = "Modulate Step Height"
	// MPropertyGroupName = "Step Height"
	// MPropertyAutoRebuildOnChange
	bool m_bModulateStepHeight;
	// MPropertyFriendlyName = "Height Increase Scale"
	// MPropertyGroupName = "Step Height"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flStepHeightIncreaseScale;
	// MPropertyFriendlyName = "Height Decrease Scale"
	// MPropertyGroupName = "Step Height"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flStepHeightDecreaseScale;
	// MPropertyFriendlyName = "Enable Hip Shift"
	// MPropertyGroupName = "Hip Shift"
	bool m_bEnableHipShift;
	// MPropertyFriendlyName = "Hip Shift Scale"
	// MPropertyGroupName = "Hip Shift"
	// MPropertyAttributeRange = "0 1"
	float32 m_flHipShiftScale;
	// MPropertyFriendlyName = "Damping"
	// MPropertyGroupName = "Hip Shift"
	CAnimInputDamping m_hipShiftDamping;
	// MPropertyFriendlyName = "Apply Tilt"
	// MPropertyGroupName = "Tilt"
	bool m_bApplyTilt;
	// MPropertyFriendlyName = "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName = "Tilt"
	float32 m_flTiltPlanePitchSpringStrength;
	// MPropertyFriendlyName = "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName = "Tilt"
	float32 m_flTiltPlaneRollSpringStrength;
	// MPropertyFriendlyName = "Enable Lock Breaking"
	// MPropertyGroupName = "Lock Breaking"
	bool m_bEnableLockBreaking;
	// MPropertyFriendlyName = "Tolerance"
	// MPropertyGroupName = "Lock Breaking"
	float32 m_flLockBreakTolerance;
	// MPropertyFriendlyName = "Blend Time"
	// MPropertyGroupName = "Lock Breaking"
	float32 m_flLockBreakBlendTime;
	// MPropertyFriendlyName = "Enable Stretching"
	// MPropertyGroupName = "Stretch"
	bool m_bEnableStretching;
	// MPropertyFriendlyName = "Max Stretch Amount"
	// MPropertyGroupName = "Stretch"
	float32 m_flMaxStretchAmount;
	// MPropertyFriendlyName = "Extension Scale"
	// MPropertyGroupName = "Stretch"
	// MPropertyAttributeRange = "0 1"
	float32 m_flStretchExtensionScale;
	// MPropertyFriendlyName = "Enable Ground Tracing"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAutoRebuildOnChange
	bool m_bEnableGroundTracing;
	// MPropertyFriendlyName = "Angle Traces with Slope"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAttributeRange = "0 1"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTraceAngleBlend;
	// MPropertyFriendlyName = "Apply Hip Drop"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bApplyHipDrop;
	// MPropertyFriendlyName = "Max Foot Lift"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxFootHeight;
	// MPropertyFriendlyName = "Leg Extension Scale"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flExtensionScale;
	// MPropertyFriendlyName = "Hip Damping"
	// MPropertyGroupName = "Ground IK"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CAnimInputDamping m_hipDampingSettings;
	// MPropertyFriendlyName = "Enable Root Height Damping"
	// MPropertyGroupName = "Root Height Damping"
	// MPropertyAutoRebuildOnChange
	bool m_bEnableRootHeightDamping;
	// MPropertyFriendlyName = "Damping Settings"
	// MPropertyGroupName = "Root Height Damping"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CAnimInputDamping m_rootHeightDamping;
	// MPropertyFriendlyName = "Max Offset"
	// MPropertyGroupName = "Root Height Damping"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxRootHeightOffset;
	// MPropertyFriendlyName = "Min Offset"
	// MPropertyGroupName = "Root Height Damping"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMinRootHeightOffset;
};
