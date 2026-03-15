// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SetPosition",
//	"m_bEnabled": true,
//	"m_vPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_CoordinateSpace": "WORLD"
//}
// MPropertyFriendlyName = "Transform: Set Position"
// MPropertyDescription = "Set the position of the current transform."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SetPosition : public CSmartPropTransformOperation
{
	// MPropertyDescription = "Local space position translation to apply to the current transform"
	CSmartPropAttributeVector m_vPosition;
	// MPropertyDescription = "Specifies the coordinate space of the specified position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace;
};
