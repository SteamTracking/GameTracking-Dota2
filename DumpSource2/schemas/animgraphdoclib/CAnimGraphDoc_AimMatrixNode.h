// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_AimMatrixNode",
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
//	"m_sequenceName": "",
//	"m_flMaxYawAngle": 45.000000,
//	"m_flMaxPitchAngle": 45.000000,
//	"m_target": "LookTarget",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bIsPosition": false,
//	"m_attachmentName": "",
//	"m_blendMode": "AimMatrixBlendMode_Additive",
//	"m_boneMaskName": "",
//	"m_bResetBase": true,
//	"m_bLockWhenWaning": true,
//	"m_bUseBiasAndClamp": false,
//	"m_flBiasAndClampYawOffset": 1.000000,
//	"m_flBiasAndClampPitchOffset": 1.000000,
//	"m_biasAndClampBlendCurve":
//	{
//		"m_flControlPoint1": 0.000000,
//		"m_flControlPoint2": 1.000000
//	},
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Aim Matrix"
class CAnimGraphDoc_AimMatrixNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_sequenceName;
	// MPropertyFriendlyName = "Max Yaw Angle"
	float32 m_flMaxYawAngle;
	// MPropertyFriendlyName = "Max Pitch Angle"
	float32 m_flMaxPitchAngle;
	// MPropertyFriendlyName = "Target"
	// MPropertyAutoRebuildOnChange
	AnimVectorSource m_target;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_param;
	// MPropertyFriendlyName = "Parameter is a Position"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bIsPosition;
	// MPropertyFriendlyName = "Aim Attachment"
	// MPropertyAttributeChoiceName = "Attachment"
	CUtlString m_attachmentName;
	// MPropertyFriendlyName = "Blend Mode"
	// MPropertyAutoRebuildOnChange
	AimMatrixBlendMode m_blendMode;
	// MPropertyFriendlyName = "Bone Mask"
	// MPropertyAttributeChoiceName = "BoneMask"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_boneMaskName;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetBase;
	// MPropertyFriendlyName = "Lock Blend When Waning"
	bool m_bLockWhenWaning;
	// MPropertyFriendlyName = "Use Bias + Clamp"
	// MPropertyAutoRebuildOnChange
	bool m_bUseBiasAndClamp;
	// MPropertyFriendlyName = "Yaw Offset Angle"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flBiasAndClampYawOffset;
	// MPropertyFriendlyName = "Pitch Offset Angle"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flBiasAndClampPitchOffset;
	// MPropertyFriendlyName = "Clamp Blend Curve"
	// MPropertyAttributeEditor = "AnimGraphBlendCurve()"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CBlendCurve m_biasAndClampBlendCurve;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
