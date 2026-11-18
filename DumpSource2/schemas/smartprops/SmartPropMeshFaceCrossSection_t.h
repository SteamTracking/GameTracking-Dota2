enum SmartPropMeshFaceCrossSection_t : uint32_t
{
	// MPropertyFriendlyName = "Off"
	// MPropertyDescription = "The height of the piece is never scaled, it only follows the shape of the face."
	NONE = 0,
	// MPropertyFriendlyName = "Runs Along Reference Edge"
	// MPropertyDescription = "The piece runs along the reference edge. The height at the left and right edges scales with the length of that edge, so a round pipe stays round."
	ALONG_X = 1,
	// MPropertyFriendlyName = "Runs Into Face"
	// MPropertyDescription = "The piece runs orthogonal to the reference edge, into the face. The height at the reference edge and the opposite edge scales with the width of that edge, so a round pipe stays round."
	ALONG_Y = 2,
};
