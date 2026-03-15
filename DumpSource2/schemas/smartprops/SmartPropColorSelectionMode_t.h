enum SmartPropColorSelectionMode_t : uint32_t
{
	// MPropertyFriendlyName = "Specific Color"
	// MPropertyDescription = "Specify a specific color value (may be linked to a variable"
	SPECIFIC_COLOR = 0,
	// MPropertyFriendlyName = "Gradient Random"
	// MPropertyDescription = "Pick a random color from anywhere on the authored color gradient"
	GRADIENT_RANDOM = 1,
	// MPropertyFriendlyName = "Gradient Random Stop"
	// MPropertyDescription = "Randomly select one of the color stops specified on the gradient. Never picks a value between stops."
	GRADIENT_RANDOM_STOP = 2,
	// MPropertyFriendlyName = "Gradient Specific Value"
	// MPropertyDescription = "Use a color value from a specified location on the gradient"
	GRADIENT_LOCATION = 3,
};
