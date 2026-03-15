// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PlaceOnPath",
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
//	"m_PathName": "",
//	"m_flSpacing": 1.000000,
//	"m_flOffsetAlongPath": 0.000000,
//	"m_vPathOffset":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_PathSpace": "WORLD",
//	"m_bUseFixedUpDirection": false,
//	"m_bUseProjectedDistance": false,
//	"m_vUpDirection":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_UpDirectionSpace": "WORLD",
//	"m_DefaultPathInWorldSpace": false,
//	"m_DefaultPath":
//	[
//	]
//}
// MPropertyFriendlyName = "Place on Path"
// MPropertyDescription = "An element which places an instance of its child elements at a specified interval along a path."
class CSmartPropElement_PlaceOnPath : public CSmartPropElement_Group
{
	// MPropertyDescription = "Name of the path to use. This path name will show up in the property editor when selecting a placement of this smart prop in Hammer, allowing selection of a path object in the map to use."
	CUtlString m_PathName;
	// MPropertyDescription = "Spacing between points on the path"
	CSmartPropAttributeFloat m_flSpacing;
	// MPropertyDescription = "Offset from the start of the path to place the first point."
	CSmartPropAttributeFloat m_flOffsetAlongPath;
	// MPropertyFriendlyName = "Offset from path"
	// MPropertyDescription = "Offset to apply to the path, specifies a horizontal and vertical offset to apply relative to the up direction."
	CSmartPropAttributeVector2D m_vPathOffset;
	// MPropertyFriendlyName = "Path Evaluation Space"
	// MPropertyDescription = "Specifies the space in which the provided input path is to be evalauted.<br><br><b>World Space</b>: The input path will be evaluated in world space, such that child elements will be placed directly on the target path regardless of the transform of the smart prop object. <br><b>Object Space</b>: The world space transform of the input path will be ignored and instead the path will be evaluated relative to the transform of the smart prop object. <br><b>Element Space</b>: The world space transform of the input path will be ignored and instead the path will be evaluated relative to the transform of the current element within the smart prop. "
	CSmartPropAttributeCoordinateSpace m_PathSpace;
	// MPropertyDescription = "If true, treat the specified up direction as fixed up direction to apply to all elements placed on the path. If false the up direction is just an initial direction."
	CSmartPropAttributeBool m_bUseFixedUpDirection;
	// MPropertyDescription = "Compute the spacing distance in the 2d plane defined by the up direction. Most useful when using a fixed up direction, if maintaining a distance in the 2d plane is more important than maintaing distance along the path."
	CSmartPropAttributeBool m_bUseProjectedDistance;
	// MPropertyDescription = "If not using a fixed up direction, provides an initial up direction which will be used to determine the orientation of first element on the path, after that the elements will incrementally update to follow the path and may not match this direction. If Use Fixed Up direction is specified, then all elements will use this direction to deterime their up direction."
	CSmartPropAttributeVector m_vUpDirection;
	// MPropertyDescription = "Space in which the up direction is defined."
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace;
	// MPropertyFriendlyName = "Default Path In World Space"
	// MPropertyDescription = "If enabled, the default path values will be treated as world space values, if disabled they are treated as object space values. Typically it makes sense for literal values to be treated as being in object space, but if the values are being supplied by locators they will typically be in world space."
	CSmartPropAttributeBool m_DefaultPathInWorldSpace;
	// MPropertyDescription = "A set of points defining a path to use when an external path isn't specified. This will be used in the preview and thumbnail for the smart prop. It will also be used when the smart prop is placed in Hammer before a path is selected."
	CUtlVector< CSmartPropAttributeVector > m_DefaultPath;
};
