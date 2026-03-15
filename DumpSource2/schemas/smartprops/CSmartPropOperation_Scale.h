// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_Scale",
//	"m_bEnabled": true,
//	"m_flScale": 1.000000
//}
// MPropertyFriendlyName = "Transform: Scale"
// MPropertyDescription = "Apply a scale to the current transform."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_Scale : public CSmartPropTransformOperation
{
	// MPropertyDescription = "Scale to apply to the current transform"
	CSmartPropAttributeFloat m_flScale;
};
