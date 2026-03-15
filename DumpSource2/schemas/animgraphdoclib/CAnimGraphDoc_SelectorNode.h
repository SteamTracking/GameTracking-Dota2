// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SelectorNode",
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
//	"m_children":
//	[
//	],
//	"m_fallbackChild":
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
//	"m_tags":
//	[
//	],
//	"m_selectionSource": "SelectionSource_Enum",
//	"m_boolParamName": "",
//	"m_boolParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_enumParamName": "",
//	"m_enumParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_tagID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_blendDuration":
//	{
//		"_class": "CFloatAnimValue",
//		"m_flConstValue": 0.200000,
//		"m_paramName": "",
//		"m_paramID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_eSource": "Constant"
//	},
//	"m_tagBehavior": "SelectorTagBehavior_OffWhenFinished",
//	"m_bResetOnChange": true,
//	"m_bSyncCyclesOnChange": false,
//	"m_bLockWhenWaning": false,
//	"m_blendCurve":
//	{
//		"m_flControlPoint1": 0.000000,
//		"m_flControlPoint2": 1.000000
//	}
//}
// MPropertyFriendlyName = "Selector"
class CAnimGraphDoc_SelectorNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CUtlVector< CAnimGraphDoc_NodeConnection > m_children;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_fallbackChild;
	// MPropertySuppressField
	CUtlVector< AnimTagID > m_tags;
	// MPropertyFriendlyName = "Selection Source"
	// MPropertyAutoRebuildOnChange
	SelectionSource_t m_selectionSource;
	// MPropertySuppressField
	CUtlString m_boolParamName;
	// MPropertyFriendlyName = "Bool Parameter"
	// MPropertyAttributeChoiceName = "BoolParameter"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_boolParamID;
	// MPropertySuppressField
	CUtlString m_enumParamName;
	// MPropertyFriendlyName = "Enum Parameter"
	// MPropertyAttributeChoiceName = "EnumParameter"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_enumParamID;
	// MPropertyFriendlyName = "Tag Parameter"
	// MPropertyAttributeChoiceName = "Tag"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimTagID m_tagID;
	// MPropertyFriendlyName = "Blend Duration"
	CFloatAnimValue m_blendDuration;
	// MPropertyFriendlyName = "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior;
	// MPropertyFriendlyName = "Reset On Change"
	bool m_bResetOnChange;
	// MPropertyFriendlyName = "Start new option at same cycle"
	bool m_bSyncCyclesOnChange;
	// MPropertyFriendlyName = "Lock Selection When Waning"
	bool m_bLockWhenWaning;
	// MPropertySuppressField
	CBlendCurve m_blendCurve;
};
