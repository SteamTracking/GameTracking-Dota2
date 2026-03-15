// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_LookAtNode",
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
//	"m_target": "VectorParameter",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bIsPosition": false,
//	"m_weightParamName": "",
//	"m_weightParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookatChainName": "",
//	"m_attachmentName": "",
//	"m_bRotateYawForward": true,
//	"m_flYawLimit": 45.000000,
//	"m_flPitchLimit": 45.000000,
//	"m_bMaintainUpDirection": false,
//	"m_bResetBase": true,
//	"m_bLockWhenWaning": true,
//	"m_bUseHysteresis": false,
//	"m_flHysteresisInnerAngle": 1.000000,
//	"m_flHysteresisOuterAngle": 20.000000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Look At"
class CAnimGraphDoc_LookAtNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Target"
	// MPropertyAutoRebuildOnChange
	AnimVectorSource m_target;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Target Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_param;
	// MPropertyFriendlyName = "Parameter is a Position"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bIsPosition;
	// MPropertySuppressField
	CUtlString m_weightParamName;
	// MPropertyFriendlyName = "Weight Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_weightParam;
	// MPropertyFriendlyName = "LookAt Chain"
	// MPropertyAttributeChoiceName = "LookAtChain"
	CUtlString m_lookatChainName;
	// MPropertyFriendlyName = "Aim Attachment"
	// MPropertyAttributeChoiceName = "Attachment"
	CUtlString m_attachmentName;
	// MPropertyFriendlyName = "Rotate Through Forward"
	// MPropertyGroupName = "Rotation Limits"
	// MPropertyAutoRebuildOnChange
	bool m_bRotateYawForward;
	// MPropertyFriendlyName = "Yaw Limit"
	// MPropertyAttributeRange = "0 180"
	// MPropertyGroupName = "Rotation Limits"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flYawLimit;
	// MPropertyFriendlyName = "Pitch Limit"
	// MPropertyAttributeRange = "0 90"
	// MPropertyGroupName = "Rotation Limits"
	float32 m_flPitchLimit;
	// MPropertyFriendlyName = "Maintain Up Direction"
	bool m_bMaintainUpDirection;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetBase;
	// MPropertyFriendlyName = "Lock Blend When Waning"
	bool m_bLockWhenWaning;
	// MPropertyFriendlyName = "Use Hysteresis"
	// MPropertyGroupName = "Hysteresis"
	bool m_bUseHysteresis;
	// MPropertyFriendlyName = "Inner Angle"
	// MPropertyGroupName = "Hysteresis"
	float32 m_flHysteresisInnerAngle;
	// MPropertyFriendlyName = "Outer Angle"
	// MPropertyGroupName = "Hysteresis"
	float32 m_flHysteresisOuterAngle;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
