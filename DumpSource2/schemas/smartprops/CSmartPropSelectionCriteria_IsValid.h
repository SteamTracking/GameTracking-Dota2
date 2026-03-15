// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_IsValid",
//	"m_bEnabled": true,
//	"m_Expression": ""
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Is Valid"
// MPropertyDescription = "Specifies if this element is currently valid choice."
class CSmartPropSelectionCriteria_IsValid : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Valid When"
	// MPropertyDescription = "Expression to evaluate to determine if this choice is currently valid."
	// MPropertyAttributeEditor = "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression;
};
