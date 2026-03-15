// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_MidpointDeformer",
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
//	"m_bDeformationEnabled": true,
//	"m_vStart":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vEnd":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_fRadius": 64.000000,
//	"m_bContinuousSpline": false,
//	"m_vOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vAngles":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vScale":
//	[
//		1.000000,
//		1.000000
//	],
//	"m_fFalloff": 1.000000,
//	"m_OutputVariable": ""
//}
// MPropertyFriendlyName = "Midpoint Deformer"
// MPropertyDescription = "Soft deform the center of a volume defined by two endpoints."
class CSmartPropElement_MidpointDeformer : public CSmartPropElement_Deformer
{
	// MPropertyFriendlyName = "Deformation Enabled"
	// MPropertyDescription = "Should the deformation be applied. If disabled the children will still be placed, but will not be deformed. Esentially making the element behave as a group."
	CSmartPropAttributeBool m_bDeformationEnabled;
	// MPropertyFriendlyName = "Start Point"
	// MPropertyDescription = "Endpoint of deformation region."
	CSmartPropAttributeVector m_vStart;
	// MPropertyFriendlyName = "End Point"
	// MPropertyDescription = "Endpoint of deformation region."
	CSmartPropAttributeVector m_vEnd;
	// MPropertyFriendlyName = "Effect Size"
	// MPropertyDescription = "The distance from the line formed by the endpoints that encapsulated the deformation region."
	CSmartPropAttributeFloat m_fRadius;
	// MPropertyFriendlyName = "Continuous Interpolation"
	// MPropertyDescription = "Enables an alternate interpolation method that doesnt deform endpoint tangents."
	CSmartPropAttributeBool m_bContinuousSpline;
	// MPropertyFriendlyName = "Midpoint Offset"
	// MPropertyDescription = "Offsets the center of the deformation region."
	CSmartPropAttributeVector m_vOffset;
	// MPropertyFriendlyName = "Midpoint Rotation"
	// MPropertyDescription = "Rotate the center of the deformation region."
	CSmartPropAttributeAngles m_vAngles;
	// MPropertyFriendlyName = "Midpoint Scale"
	// MPropertyDescription = "Scale the center of the deformation region."
	CSmartPropAttributeVector2D m_vScale;
	// MPropertyFriendlyName = "Falloff"
	// MPropertyDescription = "Adjust deformation falloff from the center of the region to the endpoints."
	CSmartPropAttributeFloat m_fFalloff;
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector )"
	// MPropertyDescription = "Outputs the absolute position of the midpoint post deformation."
	CUtlString m_OutputVariable;
};
