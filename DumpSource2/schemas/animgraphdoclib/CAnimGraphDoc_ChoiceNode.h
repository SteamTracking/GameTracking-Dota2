// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_ChoiceNode",
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
//	"m_seed": <HIDDEN FOR DIFF>,
//	"m_choiceMethod": "WeightedRandom",
//	"m_choiceChangeMethod": "OnReset",
//	"m_blendMethod": "SingleBlendTime",
//	"m_blendTime": 0.200000,
//	"m_bCrossFade": false,
//	"m_bResetChosen": true,
//	"m_bDontResetSameSelection": false
//}
// MPropertyFriendlyName = "Choice"
class CAnimGraphDoc_ChoiceNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Options"
	// MPropertyAutoExpandSelf
	CUtlVector< CChoiceNodeChild > m_children;
	// MPropertySuppressField
	int32 m_seed;
	// MPropertyFriendlyName = "Method"
	ChoiceMethod m_choiceMethod;
	// MPropertyFriendlyName = "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod;
	// MPropertyGroupName = "Blending"
	// MPropertyFriendlyName = "Blend Method"
	// MPropertyAutoRebuildOnChange
	ChoiceBlendMethod m_blendMethod;
	// MPropertyGroupName = "Blending"
	// MPropertyFriendlyName = "Blend Duration"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_blendTime;
	// MPropertyGroupName = "Blending"
	// MPropertyFriendlyName = "Cross Fade"
	bool m_bCrossFade;
	// MPropertyFriendlyName = "Reset On Selection"
	// MPropertyAutoRebuildOnChange
	bool m_bResetChosen;
	// MPropertyFriendlyName = "Don't Reset Same Selection"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bDontResetSameSelection;
};
