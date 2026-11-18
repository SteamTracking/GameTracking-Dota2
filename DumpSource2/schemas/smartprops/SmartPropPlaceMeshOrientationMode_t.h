enum SmartPropPlaceMeshOrientationMode_t : uint32_t
{
	// MPropertyFriendlyName = "Open Edge"
	// MPropertyDescription = "An open edge, preferably one that comes after a closed edge. Faces without open edges use their longest edge."
	FIRST_OPEN_EDGE = 0,
	// MPropertyFriendlyName = "Closed Edge"
	// MPropertyDescription = "A closed edge, preferably one that comes after an open edge. Faces without closed edges use their longest edge."
	FIRST_CLOSED_EDGE = 1,
	// MPropertyFriendlyName = "Along UV Channel 1"
	// MPropertyDescription = "The edge that runs most along U of the first UV channel, so local Y points towards the top of the texture. Faces with degenerate UVs use their longest edge."
	UVMAP1 = 2,
	// MPropertyFriendlyName = "Along UV Channel 2"
	// MPropertyDescription = "The edge that runs most along U of the second UV channel, so local Y points towards the top of the texture. The mesh only has a second UV channel if one of its materials uses it, faces without it or with degenerate UVs use their longest edge."
	UVMAP2 = 3,
	// MPropertyFriendlyName = "Along Object Axis"
	// MPropertyDescription = "The edge that runs most along the axis, in the space of the mesh. Faces perpendicular to the axis use their longest edge."
	OBJECT_SPACE = 4,
	// MPropertyFriendlyName = "Longest Edge"
	// MPropertyDescription = "The longest edge of the face."
	LONGEST_EDGE = 5,
	// MPropertyFriendlyName = "Shortest Edge"
	// MPropertyDescription = "The shortest edge of the face."
	SHORTEST_EDGE = 6,
	// MPropertyFriendlyName = "Along World Axis"
	// MPropertyDescription = "The edge that runs most along the axis, in world space. Faces perpendicular to the axis use their longest edge."
	WORLD_AXIS = 7,
};
