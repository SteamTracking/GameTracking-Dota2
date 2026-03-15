// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_LeanMatrixNode",
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
//	"m_sequenceName": "",
//	"m_flMaxValue": 1.000000,
//	"m_blendSource": "MoveDirection",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_verticalAxisDirection":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	],
//	"m_horizontalAxisDirection":
//	[
//		0.000000,
//		1.000000,
//		0.000000
//	],
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Lean Matrix"
class CAnimGraphDoc_LeanMatrixNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_sequenceName;
	// MPropertyFriendlyName = "Max Value"
	float32 m_flMaxValue;
	// MPropertyFriendlyName = "Blend Source"
	AnimVectorSource m_blendSource;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_param;
	// MPropertyFriendlyName = "Vertical Axis"
	Vector m_verticalAxisDirection;
	// MPropertyFriendlyName = "Horizontal Axis"
	Vector m_horizontalAxisDirection;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
