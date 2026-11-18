enum SmartPropMeshEdgeType_t : uint32_t
{
	// MPropertyFriendlyName = "Open"
	// MPropertyDescription = "Edges on the border of the mesh, used by one face."
	OPEN = 0,
	// MPropertyFriendlyName = "Closed"
	// MPropertyDescription = "Edges shared by two faces."
	CLOSED = 1,
	// MPropertyFriendlyName = "Both"
	// MPropertyDescription = "All edges of the face."
	BOTH = 2,
};
