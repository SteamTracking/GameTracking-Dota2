enum SmartPropPlaceMeshOrientationMode_t : uint32_t
{
	// MPropertyFriendlyName = "First Open Edge"
	// MPropertyDescription = "Orientation of child elements placed on faces will be driven by position of center of first open edge relative to face center."
	FIRST_OPEN_EDGE = 0,
	// MPropertyFriendlyName = "First Closed Edge"
	// MPropertyDescription = "Orientation of child elements placed on faces will be driven by position of center of first closed edge relative to face center."
	FIRST_CLOSED_EDGE = 1,
	// MPropertyFriendlyName = "UV Channel 1"
	// MPropertyDescription = "Orientation of child elements placed on faces will be driven by orthonormalized UV basis at face center. U axis is prioritized during orthonormalization."
	UVMAP1 = 2,
	// MPropertyFriendlyName = "UV Channel 2"
	// MPropertyDescription = "Orientation of child elements placed on faces will be driven by orthonormalized UV basis at face center. U axis is prioritized during orthonormalization."
	UVMAP2 = 3,
};
