// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_ChoiceWeight",
//	"m_bEnabled": true,
//	"m_flWeight": 1.000000
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Choice Weight"
// MPropertyDescription = "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
class CSmartPropSelectionCriteria_ChoiceWeight : public CSmartPropSelectionCriteria
{
	// MPropertyDescription = "Relative weight of this choice, higher weighted choices are more likely to be selected."
	CSmartPropAttributeFloat m_flWeight;
};
