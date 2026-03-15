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
//	"m_flMinInputValue": 0.000000,
//	"m_flMaxInputValue": 1.000000,
//	"m_flMinOutputValue": 0.000000,
//	"m_flMaxOutputValue": 1.000000
//}
// MPropertyFriendlyName = "Remap Value"
class CRemapValueItem
{
	// MPropertyFriendlyName = "Value Type"
	// MPropertyAutoRebuildOnChange
	RemapValueType m_valueType;
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
	// MPropertyFriendlyName = "Min Input Value"
	float32 m_flMinInputValue;
	// MPropertyFriendlyName = "Max Input Value"
	float32 m_flMaxInputValue;
	// MPropertyFriendlyName = "Min Output Value"
	float32 m_flMinOutputValue;
	// MPropertyFriendlyName = "Max Output Value"
	float32 m_flMaxOutputValue;
};
