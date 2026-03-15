enum SmartPropGridPlacementMode_t : uint32_t
{
	// MPropertyFriendlyName = "Array"
	// MPropertyDescription = "Generate the grid by placing N x N children."
	SEGMENT = 0,
	// MPropertyFriendlyName = "Fill"
	// MPropertyDescription = "Fill the area based on the largest bounds of child elements as specified in their selection criteria."
	FILL = 1,
};
