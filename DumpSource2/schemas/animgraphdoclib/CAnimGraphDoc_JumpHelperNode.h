// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_JumpHelperNode",
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
//	"m_tagSpans":
//	[
//	],
//	"m_paramSpans":
//	[
//	],
//	"m_sequenceName": "",
//	"m_playbackSpeed": 1.000000,
//	"m_bLoop": false,
//	"m_targetParamName": "",
//	"m_targetParamID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_flJumpStartCycle": 0.000000,
//	"m_flJumpDuration": 0.100000,
//	"m_bTranslateX": true,
//	"m_bTranslateY": true,
//	"m_bTranslateZ": true,
//	"m_bScaleSpeed": true,
//	"m_eCorrectionMethod": "ScaleMotion"
//}
// MPropertyFriendlyName = "Jump Helper"
class CAnimGraphDoc_JumpHelperNode : public CAnimGraphDoc_SequenceNode
{
	// MPropertySuppressField
	CUtlString m_targetParamName;
	// MPropertyFriendlyName = "Target Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_targetParamID;
	// MPropertySuppressField
	float32 m_flJumpStartCycle;
	// MPropertySuppressField
	float32 m_flJumpDuration;
	// MPropertyFriendlyName = "Translate X"
	bool m_bTranslateX;
	// MPropertyFriendlyName = "Translate Y"
	bool m_bTranslateY;
	// MPropertyFriendlyName = "Translate Z"
	bool m_bTranslateZ;
	// MPropertyFriendlyName = "Apply Speed Scale"
	bool m_bScaleSpeed;
	// MPropertyFriendlyName = "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod;
};
