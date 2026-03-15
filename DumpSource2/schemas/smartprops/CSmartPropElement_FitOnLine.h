// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_FitOnLine",
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
//	"m_PointSpace": "ELEMENT",
//	"m_bOrientAlongLine": false,
//	"m_vUpDirection":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_UpDirectionSpace": "ELEMENT",
//	"m_bPrioritizeUp": false,
//	"m_nScaleMode": "NONE",
//	"m_nPickMode": "LARGEST_FIRST"
//}
// MPropertyFriendlyName = "Fit on Line"
// MPropertyDescription = "An element which fits one or more instances of a set of choices on to a line."
class CSmartPropElement_FitOnLine : public CSmartPropElement_Group
{
	// MPropertyStartGroup = "+End Points"
	// MPropertyDescription = "Specifies the start point of the line in the specified coordinate space."
	CSmartPropAttributeVector m_vStart;
	// MPropertyDescription = "Specifies the end point of the line in the specified coordinate space."
	CSmartPropAttributeVector m_vEnd;
	// MPropertyFriendlyName = "End point space"
	// MPropertyDescription = "Specifies the coordinate space in which the end point values are specified."
	CSmartPropAttributeCoordinateSpace m_PointSpace;
	// MPropertyStartGroup = "+Orientation"
	// MPropertyDescription = "Should the child elements be oriented based on the line. If enabled the child elements placed on the line will be oriented such that their +x axis points along the line towards the end point."
	CSmartPropAttributeBool m_bOrientAlongLine;
	// MPropertyDescription = "Up vector which is used to determine the rotation of each element around the line."
	CSmartPropAttributeVector m_vUpDirection;
	// MPropertyDescription = "Space in which the up direction is defined."
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace;
	// MPropertyDescription = "When the up direction is not orthogonal to the line direction normally the up vector will be adjusted to make it orthogonal to the line direction. If prioritize up is true, then the up direction will be maintained and the forward direction will be adjusted."
	CSmartPropAttributeBool m_bPrioritizeUp;
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Scale Mode"
	// MPropertyDescription = "Specifies how scale is applied to each of the selected element in order to fit them to the line."
	CSmartPropAttributeScaleMode m_nScaleMode;
	// MPropertyFriendlyName = "Child Selection Mode"
	// MPropertyDescription = "Specifies how scale is applied to each of the selected element in order to fit them to the line."
	CSmartPropAttributePickMode m_nPickMode;
};
