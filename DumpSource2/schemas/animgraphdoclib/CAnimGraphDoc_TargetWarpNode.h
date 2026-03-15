// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_TargetWarpNode",
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
//	"m_eLinearRootMotionMode": "TargetWarpLinearRootMotionMode_Default",
//	"m_eAngleMode": "eFacingHeading",
//	"m_eCorrectionMethod": "ScaleMotion",
//	"m_eTargetWarpTimingMethod": "ReachDestinationOnRootMotionEnd",
//	"m_moveHeadingParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_desiredMoveHeadingParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_targetPositionParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bTargetPositionIsWorldSpace": false,
//	"m_targetFacePositionParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bTargetFacePositionIsWorldSpace": false,
//	"m_targetUpVectorParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bOnlyWarpWhenTagIsFound": false,
//	"m_bWarpOrientationDuringTranslation": false,
//	"m_flMaxAngle": 180.000000,
//	"m_bWarpAroundCenter": false
//}
// MPropertyFriendlyName = "Target Warp"
class CAnimGraphDoc_TargetWarpNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Linear Root Motion Mode"
	// MPropertyAutoRebuildOnChange
	TargetWarpLinearRootMotionMode m_eLinearRootMotionMode;
	// MPropertyFriendlyName = "Angle Mode"
	TargetWarpAngleMode_t m_eAngleMode;
	// MPropertyFriendlyName = "Correction Method"
	TargetWarpCorrectionMethod m_eCorrectionMethod;
	// MPropertyFriendlyName = "Timing Method"
	TargetWarpTimingMethod m_eTargetWarpTimingMethod;
	// MPropertyFriendlyName = "Move Heading"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_moveHeadingParamID;
	// MPropertyFriendlyName = "Desired Move Heading"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_desiredMoveHeadingParamID;
	// MPropertyFriendlyName = "Target Position"
	// MPropertyAttributeChoiceName = "VectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_targetPositionParamID;
	// MPropertyFriendlyName = "Target Position Is World Space"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bTargetPositionIsWorldSpace;
	// MPropertyFriendlyName = "Target Face Position"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_targetFacePositionParamID;
	// MPropertyFriendlyName = "Target Face Position Is World Space"
	bool m_bTargetFacePositionIsWorldSpace;
	// MPropertyFriendlyName = "Target Up Vector (World Space)"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_targetUpVectorParamID;
	// MPropertyFriendlyName = "Require warp tag"
	// MPropertyDescription = "Only warp if there is a warp tag active. Otherwise this node will warp whenever it's active"
	bool m_bOnlyWarpWhenTagIsFound;
	// MPropertyFriendlyName = "Warp orientation during translation"
	// MPropertyDescription = "If the source animation has no rotation root motion and there is no tag present that specifies rotation warp section, rotation will be introduced only during linear root motion."
	bool m_bWarpOrientationDuringTranslation;
	// MPropertyFriendlyName = "Max Angle"
	// MPropertyDescription = "If the angle delta between the current face direction and the target face direction is more than this angle, no warping will occur."
	float32 m_flMaxAngle;
	// MPropertyFriendlyName = "Warp orientation around center"
	// MPropertyDescription = "If set, orientation warp pivots around the model center instead of abs origin."
	bool m_bWarpAroundCenter;
};
