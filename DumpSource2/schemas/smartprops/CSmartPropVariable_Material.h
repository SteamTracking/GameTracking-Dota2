// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_Material",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": ""
//}
// MPropertyFriendlyName = "Material"
// MPropertyDescription = "Material Asset Variable"
class CSmartPropVariable_Material : public CSmartPropVariable
{
	// MPropertyFriendlyName = "Default Material"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_DefaultValue;
};
