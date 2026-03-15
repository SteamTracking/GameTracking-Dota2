// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_MoverNode",
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
//	"m_bApplyMovement": true,
//	"m_moveVectorParamName": "",
//	"m_moveVectorParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bOrientMovement": false,
//	"m_moveHeadingParamName": "",
//	"m_moveHeadingParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bAdditive": false,
//	"m_bTurnToFace": false,
//	"m_facingTarget": "Parameter",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bLimitOnly": false,
//	"m_flTurnToFaceOffset": 0.000000,
//	"m_flTurnToFaceLimit": 180.000000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Mover"
class CAnimGraphDoc_MoverNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Generate Movement"
	// MPropertyGroupName = "Generate Movement"
	// MPropertyAutoRebuildOnChange
	bool m_bApplyMovement;
	// MPropertySuppressField
	CUtlString m_moveVectorParamName;
	// MPropertyFriendlyName = "Movement Velocity Parameter"
	// MPropertyGroupName = "Generate Movement"
	// MPropertyAttributeChoiceName = "VectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_moveVectorParam;
	// MPropertyFriendlyName = "Orient Movement"
	// MPropertyGroupName = "Orient Movement"
	// MPropertyAutoRebuildOnChange
	bool m_bOrientMovement;
	// MPropertySuppressField
	CUtlString m_moveHeadingParamName;
	// MPropertyFriendlyName = "Movement Heading Parameter"
	// MPropertyGroupName = "Orient Movement"
	// MPropertyAttributeChoiceName = "FloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_moveHeadingParam;
	// MPropertyFriendlyName = "Additive"
	bool m_bAdditive;
	// MPropertyFriendlyName = "Turn to Face"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAutoRebuildOnChange
	bool m_bTurnToFace;
	// MPropertyFriendlyName = "Face Direction"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_facingTarget;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Facing Parameter"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttributeChoiceName = "FloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_param;
	// MPropertyFriendlyName = "Turn Limit Only"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	// MPropertyAutoRebuildOnChange
	bool m_bLimitOnly;
	// MPropertyFriendlyName = "Turn to Face Offset"
	// MPropertyAttributeRange = "-180 180"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTurnToFaceOffset;
	// MPropertyFriendlyName = "Turn to Face Limit"
	// MPropertyAttributeRange = "0 180"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTurnToFaceLimit;
	// MPropertyFriendlyName = "Damping"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CAnimInputDamping m_damping;
};
