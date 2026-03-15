// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_MaterialGroup",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_sModelName": "",
//	"m_DefaultValue": ""
//}
// MPropertyFriendlyName = "Material Group"
class CSmartPropVariable_MaterialGroup : public CSmartPropVariable
{
	// MPropertyDescription = "Model containing the set of material groups to select."
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_VMDL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	// MPropertyFriendlyName = "Default Material Group"
	// MPropertyDescription = "Default material group (skin) to assign to the variable value."
	CModelMaterialGroupName m_DefaultValue;
};
