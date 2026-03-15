// MGetKV3ClassDefaults = {
//	"m_valueType": "FloatParameter",
//	"m_floatParamNameIn": "",
//	"m_floatParamNameOut": "",
//	"m_vectorParamNameIn": "",
//	"m_vectorParamNameOut": "",
//	"m_floatParamIn":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_floatParamOut":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_vectorParamIn":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_vectorParamOut":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Damped Value"
class CDampedValueItem
{
	// MPropertyFriendlyName = "Value Type"
	// MPropertyAutoRebuildOnChange
	DampedValueType m_valueType;
	// MPropertySuppressField
	CUtlString m_floatParamNameIn;
	// MPropertySuppressField
	CUtlString m_floatParamNameOut;
	// MPropertySuppressField
	CUtlString m_vectorParamNameIn;
	// MPropertySuppressField
	CUtlString m_vectorParamNameOut;
	// MPropertyFriendlyName = "Parameter In"
	// MPropertyAttributeChoiceName = "FloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_floatParamIn;
	// MPropertyFriendlyName = "Parameter Out"
	// MPropertyAttributeChoiceName = "PrivateFloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_floatParamOut;
	// MPropertyFriendlyName = "Parameter In"
	// MPropertyAttributeChoiceName = "VectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_vectorParamIn;
	// MPropertyFriendlyName = "Parameter Out"
	// MPropertyAttributeChoiceName = "PrivateVectorParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_vectorParamOut;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
