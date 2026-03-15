// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_Rotate",
//	"m_bEnabled": true,
//	"m_vRotation":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
// MPropertyFriendlyName = "Transform: Rotate"
// MPropertyDescription = "Apply a rotation to the current transform."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_Rotate : public CSmartPropTransformOperation
{
	// MPropertyDescription = "Local space rotation (in degrees) to apply to the current transform"
	CSmartPropAttributeAngles m_vRotation;
};
