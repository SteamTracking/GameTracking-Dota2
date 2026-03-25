// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_MaterialCriteria",
//	"m_bEnabled": true,
//	"m_material": "",
//	"m_bInvert": false
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Filter Faces By Material"
// MPropertyDescription = ""
class CSmartPropSelectionCriteria_MaterialCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Material"
	// MPropertyDescription = "Target material name."
	CSmartPropAttributeMaterialName m_material;
	// MPropertyFriendlyName = "Invert"
	// MPropertyDescription = "When true, discard faces with matching material."
	CSmartPropAttributeBool m_bInvert;
};
