// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FootAdjustmentNode",
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
//	"m_facingTargetParam": "",
//	"m_facingTarget":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bResetChild": true,
//	"m_bAnimationDriven": false,
//	"m_baseClipName": "",
//	"m_clips":
//	[
//	],
//	"m_flTurnTimeMin": 1.500000,
//	"m_flTurnTimeMax": 3.000000,
//	"m_flStepHeightMax": 4.000000,
//	"m_flStepHeightMaxAngle": 90.000000
//}
// MPropertyFriendlyName = "Foot Adjustment"
class CAnimGraphDoc_FootAdjustmentNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertySuppressField
	CUtlString m_facingTargetParam;
	// MPropertyFriendlyName = "Turn to Face"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_facingTarget;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetChild;
	// MPropertyFriendlyName = "Animation Driven"
	// MPropertyAutoRebuildOnChange
	bool m_bAnimationDriven;
	// MPropertyFriendlyName = "Base Anim Clips"
	// MPropertyGroupName = "Anim Driven Settings"
	// MPropertyAttributeChoiceName = "Sequence"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_baseClipName;
	// MPropertyFriendlyName = "Clips"
	// MPropertyGroupName = "Anim Driven Settings"
	// MPropertyAttributeChoiceName = "Sequence"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlVector< CUtlString > m_clips;
	// MPropertyFriendlyName = "Turn Time Min"
	// MPropertyGroupName = "Procedural Settings"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTurnTimeMin;
	// MPropertyFriendlyName = "Turn Time Max"
	// MPropertyGroupName = "Procedural Settings"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTurnTimeMax;
	// MPropertyFriendlyName = "Step Height Max"
	// MPropertyGroupName = "Procedural Settings"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flStepHeightMax;
	// MPropertyFriendlyName = "Step Height Max Angle"
	// MPropertyGroupName = "Procedural Settings"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flStepHeightMaxAngle;
};
