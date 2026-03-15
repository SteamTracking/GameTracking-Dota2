// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_Float",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": 0.000000,
//	"m_flParamaterMinValue": 0.000000,
//	"m_flParamaterMaxValue": 1.000000
//}
// MPropertyFriendlyName = "Float"
class CSmartPropVariable_Float : public CSmartPropVariable
{
	float32 m_DefaultValue;
	// MPropertySortPriority = -1
	// MPropertyReadonlyExpr = "m_bExposeAsParameter == false"
	float32 m_flParamaterMinValue;
	// MPropertySortPriority = -1
	// MPropertyReadonlyExpr = "m_bExposeAsParameter == false"
	float32 m_flParamaterMaxValue;
};
