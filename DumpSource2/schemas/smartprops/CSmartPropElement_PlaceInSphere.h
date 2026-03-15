// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PlaceInSphere",
//	"m_nElementID": -1,
//	"m_bEnabled": true,
//	"m_sLabel": "",
//	"m_SelectionCriteria":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_Children":
//	[
//	],
//	"m_PlacementMode": "SPHERE",
//	"m_DistributionMode": "RANDOM",
//	"m_flRandomness": 0.000000,
//	"m_vPlaneUpDirection":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_nCountMin": 1,
//	"m_nCountMax": 1,
//	"m_flPositionRadiusInner": 0.000000,
//	"m_flPositionRadiusOuter": 0.000000,
//	"m_bAlignOrientation": false,
//	"m_vAlignDirection":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	]
//}
// MPropertyFriendlyName = "Place In Radius"
// MPropertyDescription = "An element which places multiple instances of its child elements within a radius."
class CSmartPropElement_PlaceInSphere : public CSmartPropElement_Group
{
	// MPropertyDescription = "Specifies how the positions are computed based on the radius."
	CSmartPropAttributeRadiusPlacementMode m_PlacementMode;
	// MPropertyDescription = "Specifies the method to be used to distribute."
	CSmartPropAttributeDistributionMode m_DistributionMode;
	// MPropertySuppressExpr = "m_DistributionMode == RANDOM"
	// MPropertyDescription = "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
	CSmartPropAttributeFloat m_flRandomness;
	// MPropertySuppressExpr = "m_PlacementMode == SPHERE"
	// MPropertyDescription = "Vector up direction of the plane of the circle. This in the local space of the current element."
	CSmartPropAttributeVector m_vPlaneUpDirection;
	// MPropertyDescription = "Minimum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMin;
	// MPropertyDescription = "Maximum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMax;
	// MPropertyDescription = "Inner radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusInner;
	// MPropertyDescription = "Outer radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusOuter;
	// MPropertyDescription = "Align the initial orientation of each placed object based on it position on the sphere or circle."
	CSmartPropAttributeBool m_bAlignOrientation;
	// MPropertyReadonlyExpr = "m_bAlignOrientation == false"
	// MPropertyDescription = "Vector in the local space of the child element to be aligned with sphere or circle"
	CSmartPropAttributeVector m_vAlignDirection;
};
