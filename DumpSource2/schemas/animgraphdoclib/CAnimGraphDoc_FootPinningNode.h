// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FootPinningNode",
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
//	"m_eTimingSource": "FootMotion",
//	"m_flBlendTime": 0.200000,
//	"m_flLockBreakDistance": 24.000000,
//	"m_flMaxLegStraightAmount": 0.980000,
//	"m_bApplyFootRotationLimits": false,
//	"m_hipBoneName": "",
//	"m_bApplyLegTwistLimits": false,
//	"m_flMaxLegTwist": 25.000000,
//	"m_bResetChild": true
//}
// MPropertyFriendlyName = "Foot Pinning"
class CAnimGraphDoc_FootPinningNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootPinningItem > m_items;
	// MPropertyFriendlyName = "Lock Timing Source"
	FootPinningTimingSource m_eTimingSource;
	// MPropertyFriendlyName = "Blend Time"
	float32 m_flBlendTime;
	// MPropertyFriendlyName = "Lock Break Distance"
	float32 m_flLockBreakDistance;
	// MPropertyFriendlyName = "Max Leg Straight Amount"
	// MPropertyAttributeRange = "0 1"
	float32 m_flMaxLegStraightAmount;
	// MPropertyFriendlyName = "Limit Foot Rotation"
	// MPropertyGroupName = "Foot Rotation Limits"
	bool m_bApplyFootRotationLimits;
	// MPropertyFriendlyName = "Hip Bone"
	// MPropertyAttributeChoiceName = "Bone"
	// MPropertyGroupName = "Foot Rotation Limits"
	CUtlString m_hipBoneName;
	// MPropertyFriendlyName = "Limit Leg Twist"
	// MPropertyGroupName = "Knee Twist Limits"
	bool m_bApplyLegTwistLimits;
	// MPropertyFriendlyName = "Max Leg Twist Angle"
	// MPropertyGroupName = "Knee Twist Limits"
	float32 m_flMaxLegTwist;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetChild;
};
