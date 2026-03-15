// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_DistributionMode",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "RANDOM"
//}
// MPropertyFriendlyName = "Distribution Mode"
// MPropertyDescription = "Specifies a distribution mode used to determine how certain elements distribute instances of their children within a space."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_DistributionMode : public CSmartPropVariable
{
	SmartPropDistributionMode_t m_DefaultValue;
};
