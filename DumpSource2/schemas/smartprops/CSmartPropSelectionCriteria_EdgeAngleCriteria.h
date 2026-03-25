// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_EdgeAngleCriteria",
//	"m_bEnabled": true,
//	"m_flMinAngle": 0.000000,
//	"m_flMaxAngle": 0.000000,
//	"m_bInvert": false
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Filter Edges by Angle"
// MPropertyDescription = ""
class CSmartPropSelectionCriteria_EdgeAngleCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Min Angle"
	// MPropertyDescription = "Angle at closed edge of face."
	CSmartPropAttributeFloat m_flMinAngle;
	// MPropertyFriendlyName = "Max Angle"
	// MPropertyDescription = "Angle at closed edge of face."
	CSmartPropAttributeFloat m_flMaxAngle;
	// MPropertyFriendlyName = "Invert"
	// MPropertyDescription = "When true, discard edges within the angle threshold."
	CSmartPropAttributeBool m_bInvert;
};
