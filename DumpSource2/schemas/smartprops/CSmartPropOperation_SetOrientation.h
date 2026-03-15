// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SetOrientation",
//	"m_bEnabled": true,
//	"m_vForwardVector":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	],
//	"m_ForwardDirectionSpace": "WORLD",
//	"m_vUpVector":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_UpDirectionSpace": "WORLD",
//	"m_bPrioritizeUp": false
//}
// MPropertyFriendlyName = "Transform: Set Orientation"
// MPropertyDescription = "Set the current orientation from a specified forward and up vector."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SetOrientation : public CSmartPropTransformOperation
{
	// MPropertyGroupName = "+Forward"
	CSmartPropAttributeVector m_vForwardVector;
	// MPropertyGroupName = "+Forward"
	// MPropertyDescription = "Specifies the coordinate space the forward direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_ForwardDirectionSpace;
	// MPropertyGroupName = "+Up"
	CSmartPropAttributeVector m_vUpVector;
	// MPropertyGroupName = "+Up"
	// MPropertyDescription = "Specifies the coordinate space the up direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace;
	// MPropertyDescription = "If the specified vectors are not orthogonal, normally the up vector will be adjusted to make it orthogonal to the forward vector. If prioritize up is true, then the forward vector will be adjusted to be orthogonal to the specified up vector instead."
	CSmartPropAttributeBool m_bPrioritizeUp;
};
