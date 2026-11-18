enum SmartPropScatterOnMeshSizeMode_t : uint32_t
{
	// MPropertyFriendlyName = "Fixed Size"
	// MPropertyDescription = "One fixed size for all points."
	FIXED_SIZE = 0,
	// MPropertyFriendlyName = "Size Classes"
	// MPropertyDescription = "List of fixed size classes with relative weights."
	SIZE_CLASSES = 1,
	// MPropertyFriendlyName = "Random Range"
	// MPropertyDescription = "Random Range of sizes between min and max size."
	RANDOM_RANGE = 2,
};
