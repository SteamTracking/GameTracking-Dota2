// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_Layout2DGrid",
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
//	"m_flWidth": 100.000000,
//	"m_flLength": 100.000000,
//	"m_bVerticalLength": false,
//	"m_GridArrangement": "SEGMENT",
//	"m_GridOriginMode": "CENTER",
//	"m_nCountW": 5,
//	"m_nCountL": 5,
//	"m_flSpacingWidth": 20.000000,
//	"m_flSpacingLength": 20.000000,
//	"m_bAlternateShift": false,
//	"m_flAlternateShiftWidth": 0.500000,
//	"m_flAlternateShiftLength": 0.000000
//}
// MPropertyFriendlyName = "Layout Grid"
// MPropertyDescription = "Generates set of child instances arranged in a regular grid layout."
class CSmartPropElement_Layout2DGrid : public CSmartPropElement_Group
{
	// MPropertyDescription = "Overall grid dimension along X axis."
	// MPropertyAttributeRange = "biased 0 4096"
	CSmartPropAttributeFloat m_flWidth;
	// MPropertyDescription = "Overall grid dimension along Y axis."
	// MPropertyAttributeRange = "biased 0 4096"
	CSmartPropAttributeFloat m_flLength;
	// MPropertyDescription = "Layout length vertically (Along Z axis instead of Y)."
	CSmartPropAttributeBool m_bVerticalLength;
	// MPropertyDescription = "ARRAY: Grid is a specific number of grid divisions. FILL: The boundary is filled with as many as will fit at the specified cell spacing."
	CSmartPropAttributeGridPlacementMode m_GridArrangement;
	// MPropertyDescription = "Specifies the overall grid origin location. Corner origin grids default to quadrant I, but may be expressed in others using negative values for Width and/or Length."
	CSmartPropAttributeGridOriginMode m_GridOriginMode;
	// MPropertyDescription = "Grid segments along width axis."
	// MPropertyAttributeRange = "1 64"
	// MPropertySuppressExpr = "m_GridArrangement == FILL"
	CSmartPropAttributeInt m_nCountW;
	// MPropertyDescription = "Grid segments along Length axis."
	// MPropertyAttributeRange = "1 64"
	// MPropertySuppressExpr = "m_GridArrangement == FILL"
	CSmartPropAttributeInt m_nCountL;
	// MPropertyDescription = "Minimum Width of filled grid cells."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_GridArrangement == SEGMENT"
	CSmartPropAttributeFloat m_flSpacingWidth;
	// MPropertyDescription = "Minimum Length of filled grid cells."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_GridArrangement == SEGMENT"
	CSmartPropAttributeFloat m_flSpacingLength;
	// MPropertyDescription = "Shifts every other cell row and/or column."
	// MPropertySuppressExpr = "m_GridArrangement == FILL"
	CSmartPropAttributeBool m_bAlternateShift;
	// MPropertyDescription = "Vary cell shift in X."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_GridArrangement == FILL || m_bAlternateShift == false"
	CSmartPropAttributeFloat m_flAlternateShiftWidth;
	// MPropertyDescription = "Vary cell shift in Y."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_GridArrangement == FILL || m_bAlternateShift == false"
	CSmartPropAttributeFloat m_flAlternateShiftLength;
};
