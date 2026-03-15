// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_Blend2DNode",
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
//	"m_items":
//	[
//	],
//	"m_tagSpans":
//	[
//	],
//	"m_paramSpans":
//	[
//	],
//	"m_blendSourceX": "Parameter",
//	"m_paramNameX": "",
//	"m_paramX":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_blendSourceY": "Parameter",
//	"m_paramNameY": "",
//	"m_paramY":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_eBlendMode": "Blend2DMode_General",
//	"m_bLoop": true,
//	"m_bLockBlendOnReset": false,
//	"m_bLockWhenWaning": true,
//	"m_playbackSpeed": 1.000000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	},
//	"m_bAnimEventsAndTagsOnMostWeightedOnly": false
//}
// MPropertyFriendlyName = "Blend 2D"
class CAnimGraphDoc_Blend2DNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Blend2DItem > > m_items;
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans;
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans;
	// MPropertyFriendlyName = "Horizontal Axis"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_blendSourceX;
	// MPropertySuppressField
	CUtlString m_paramNameX;
	// MPropertyFriendlyName = "Horizontal Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_paramX;
	// MPropertyFriendlyName = "Vertical Axis"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_blendSourceY;
	// MPropertySuppressField
	CUtlString m_paramNameY;
	// MPropertyFriendlyName = "Vertical Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_paramY;
	// MPropertyFriendlyName = "Blend Mode"
	Blend2DMode m_eBlendMode;
	// MPropertyFriendlyName = "Loop"
	bool m_bLoop;
	// MPropertyFriendlyName = "Lock Blend on Reset"
	bool m_bLockBlendOnReset;
	// MPropertyFriendlyName = "Lock Blend When Waning"
	bool m_bLockWhenWaning;
	// MPropertyFriendlyName = "Playback Speed"
	float32 m_playbackSpeed;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
	// MPropertyFriendlyName = "AnimEvents and Tags Exclusive To Most Weighted"
	bool m_bAnimEventsAndTagsOnMostWeightedOnly;
};
