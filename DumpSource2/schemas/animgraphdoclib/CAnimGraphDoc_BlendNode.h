// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_BlendNode",
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
//	"m_blendValueSource": "Parameter",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_blendKeyType": "BlendKey_UserValue",
//	"m_bLockBlendOnReset": false,
//	"m_bSyncCycles": true,
//	"m_bLoop": true,
//	"m_bLockWhenWaning": true,
//	"m_bIsAngle": false,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	},
//	"m_eLinearRootMotionBlendMode": "LERP"
//}
// MPropertyFriendlyName = "Blend 1D"
class CAnimGraphDoc_BlendNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children;
	// MPropertyFriendlyName = "Blend Source"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_blendValueSource;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_param;
	// MPropertyFriendlyName = "Blend Key Values"
	BlendKeyType m_blendKeyType;
	// MPropertyFriendlyName = "Lock Blend on Reset"
	bool m_bLockBlendOnReset;
	// MPropertyFriendlyName = "Sync Cycles"
	bool m_bSyncCycles;
	// MPropertyFriendlyName = "Loop"
	bool m_bLoop;
	// MPropertyFriendlyName = "Lock Blend When Waning"
	bool m_bLockWhenWaning;
	// MPropertyFriendlyName = "Is Angle"
	bool m_bIsAngle;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
	// MPropertyFriendlyName = "Linear Root Motion Blend Mode"
	LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode;
};
