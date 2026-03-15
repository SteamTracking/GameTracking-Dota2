// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_RandomColorTintColor",
//	"m_bEnabled": true,
//	"m_SelectionMode": "RANDOM",
//	"m_ColorPosition": 0.000000,
//	"m_Mode": "MULTIPLY_OBJECT",
//	"m_Gradient":
//	{
//		"m_Stops":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Tint Color Gradient"
// MPropertyDescription = "Set the color tint to a selection from within the defined gradient."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_RandomColorTintColor : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Selection Mode"
	// MPropertyDescription = "Specifies how the color is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode;
	// MPropertyFriendlyName = "Color Position"
	// MPropertyDescription = "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
	// MPropertySuppressExpr = "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeFloat m_ColorPosition;
	// MPropertyFriendlyName = "Application Mode"
	// MPropertyDescription = "Specifies how the selected color should be applied to the current color."
	ApplyColorMode_t m_Mode;
	// MPropertyDescription = "Defines a color gradient from which a random color will be piked."
	CColorGradient m_Gradient;
};
