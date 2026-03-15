// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_Model",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": ""
//}
// MPropertyFriendlyName = "Model"
// MPropertyDescription = "Model Asset Variable"
class CSmartPropVariable_Model : public CSmartPropVariable
{
	// MPropertyFriendlyName = "Default Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DefaultValue;
};
