// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_Int",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": 0,
//	"m_nParamaterMinValue": 0,
//	"m_nParamaterMaxValue": 1
//}
// MPropertyFriendlyName = "Integer"
class CSmartPropVariable_Int : public CSmartPropVariable
{
	int32 m_DefaultValue;
	// MPropertySortPriority = -1
	// MPropertyReadonlyExpr = "m_bExposeAsParameter == false"
	int32 m_nParamaterMinValue;
	// MPropertySortPriority = -1
	// MPropertyReadonlyExpr = "m_bExposeAsParameter == false"
	int32 m_nParamaterMaxValue;
};
