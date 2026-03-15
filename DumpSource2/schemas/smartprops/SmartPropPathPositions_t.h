enum SmartPropPathPositions_t : uint32_t
{
	// MPropertyFriendlyName = "All positions"
	// MPropertyDescription = "Place at all positions along the path"
	ALL = 0,
	// MPropertyFriendlyName = "Every N positions"
	// MPropertyDescription = "Place at every Nth position along the path, skipping over the other positions"
	NTH = 1,
	// MPropertyFriendlyName = "Only at start and end"
	// MPropertyDescription = "Only place at the start or end of the path"
	START_AND_END = 2,
	// MPropertyFriendlyName = "Path control points"
	// MPropertyDescription = "Place at path control points instead of every point along the path, when this is selected the path spacing no longer applies"
	CONTROL_POINTS = 3,
};
