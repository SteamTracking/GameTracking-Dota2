// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_DirectionalBlendNode",
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
//	"m_animNamePrefix": "",
//	"m_blendValueSource": "Parameter",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bLoop": true,
//	"m_bLockBlendOnReset": false,
//	"m_playbackSpeed": 1.000000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Directional Blend"
class CAnimGraphDoc_DirectionalBlendNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Sequence Names Prefix"
	CUtlString m_animNamePrefix;
	// MPropertyFriendlyName = "Blend Source"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_blendValueSource;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_param;
	// MPropertyFriendlyName = "Loop"
	bool m_bLoop;
	// MPropertyFriendlyName = "Lock Blend on Reset"
	bool m_bLockBlendOnReset;
	// MPropertyFriendlyName = "Playback Speed"
	float32 m_playbackSpeed;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
