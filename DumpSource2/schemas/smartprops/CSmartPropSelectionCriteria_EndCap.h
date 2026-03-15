// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_EndCap",
//	"m_bEnabled": true,
//	"m_bStart": true,
//	"m_bEnd": true
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "End Cap Settings"
// MPropertyDescription = "Specifies that this is a special part that should be used at the start or end of the line."
class CSmartPropSelectionCriteria_EndCap : public CSmartPropSelectionCriteria
{
	// MPropertyDescription = "Is this an element which should be placed at the start of the line."
	CSmartPropAttributeBool m_bStart;
	// MPropertyDescription = "Is this an element which should be placed at the end of the line."
	CSmartPropAttributeBool m_bEnd;
};
