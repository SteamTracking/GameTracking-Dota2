// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropFilter_Probability",
//	"m_bEnabled": true,
//	"m_flProbability": 0.500000
//}
// MPropertyFriendlyName = "Filter: Probability"
// MPropertyDescription = "Causes the parent element to only be evaluated with a specified random probability."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropFilter_Probability : public CSmartPropFilter
{
	// MPropertyDescription = "0.0 to 1.0 value indicating the probability of this element being evaluated. Where a value of 0 means the element will never be evaluated and 1.0 means it will always be evaluated"
	CSmartPropAttributeFloat m_flProbability;
};
