// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_RotateTowards",
//	"m_bEnabled": true,
//	"m_vOriginPos":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vTargetPos":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vUpPos":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_flWeight": 1.000000,
//	"m_OriginSpace": "WORLD",
//	"m_TargetSpace": "WORLD",
//	"m_UpSpace": "WORLD"
//}
// MPropertyFriendlyName = "Transform: Rotate Towards"
// MPropertyDescription = "Apply a rotation to the current transform according to the alignment of two points."
// MVDataClassGroup (UNKNOWN FOR PARSER)
// MVDataExperimentalNodeSet (UNKNOWN FOR PARSER)
class CSmartPropOperation_RotateTowards : public CSmartPropTransformOperation
{
	// MPropertyDescription = "Position of origin point."
	CSmartPropAttributeVector m_vOriginPos;
	// MPropertyDescription = "position of target point."
	CSmartPropAttributeVector m_vTargetPos;
	// MPropertyDescription = "position of up point."
	CSmartPropAttributeVector m_vUpPos;
	// MPropertyDescription = "Coefficient to modulate the rotation"
	CSmartPropAttributeFloat m_flWeight;
	// MPropertyGroupName = "Input Coordinate Space"
	// MPropertyDescription = "Space in which the origin position is defined."
	CSmartPropAttributeCoordinateSpace m_OriginSpace;
	// MPropertyGroupName = "Input Coordinate Space"
	// MPropertyDescription = "Space in which the target position is defined."
	CSmartPropAttributeCoordinateSpace m_TargetSpace;
	// MPropertyGroupName = "Input Coordinate Space"
	// MPropertyDescription = "Space in which the up target is defined."
	CSmartPropAttributeCoordinateSpace m_UpSpace;
};
