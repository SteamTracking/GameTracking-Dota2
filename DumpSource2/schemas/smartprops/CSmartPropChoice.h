// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropChoice",
//	"m_nElementID": -1,
//	"m_Name": "",
//	"m_DefaultOption": "",
//	"m_Options":
//	[
//	]
//}
// MPropertyFriendlyName = "Choice"
// MVDataAnonymousNode
// MVDataOutlinerNameExpr (UNKNOWN FOR PARSER)
class CSmartPropChoice : public CSmartPropParameter
{
	// MPropertyFriendlyName = "Choice Name"
	CUtlString m_Name;
	// MPropertyAttributeChoiceName = "smartprop_choice_options"
	CUtlString m_DefaultOption;
	// MPropertyAutoExpandSelf
	CUtlVector< CSmartPropChoiceOption > m_Options;
};
