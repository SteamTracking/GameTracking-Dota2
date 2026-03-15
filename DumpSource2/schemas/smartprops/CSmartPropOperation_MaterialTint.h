// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_MaterialTint",
//	"m_bEnabled": true,
//	"m_Material": "",
//	"m_SelectionMode": "SPECIFIC_COLOR",
//	"m_Color":
//	[
//		255,
//		255,
//		255
//	],
//	"m_Gradient":
//	{
//		"m_Stops":
//		[
//		]
//	},
//	"m_ColorPosition": 0.000000
//}
// MPropertyFriendlyName = "Material Color Tint"
// MPropertyDescription = "Set a color tint to apply to a specific material."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_MaterialTint : public CSmartPropOperation
{
	// MPropertyAttributeEditor = "SmartPropAttributeEditor(MaterialInSmartProp)"
	// MPropertyFriendlyName = "Material"
	// MPropertyDescription = "Material to which color tint is to be applied."
	CSmartPropAttributeMaterialName m_Material;
	// MPropertyFriendlyName = "Selection Mode"
	// MPropertyDescription = "Specifies how the color is to be specified."
	CSmartPropAttributeColorSelectionMode m_SelectionMode;
	// MPropertyDescription = "Color to be applied if this choice is selected."
	// MPropertySuppressExpr = "m_SelectionMode != SPECIFIC_COLOR"
	CSmartPropAttributeColor m_Color;
	// MPropertyFriendlyName = "Color Gradient"
	// MPropertyDescription = "Defines a color gradient from which a color can be selected based on the selection mode."
	// MPropertySuppressExpr = "m_SelectionMode == SPECIFIC_COLOR"
	CColorGradient m_Gradient;
	// MPropertyFriendlyName = "Color Position"
	// MPropertyDescription = "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
	// MPropertySuppressExpr = "m_SelectionMode != GRADIENT_LOCATION"
	CSmartPropAttributeFloat m_ColorPosition;
};
