enum SmartPropSpace_t : uint32_t
{
	// MPropertyFriendlyName = "World space"
	// MPropertyDescription = "World space transform, not relative to the specific smart prop object placement."
	WORLD = 0,
	// MPropertyFriendlyName = "Object space"
	// MPropertyDescription = "Object space transform, relative to the object placement, but does not include the current element transform."
	OBJECT = 1,
	// MPropertyFriendlyName = "Element space"
	// MPropertyDescription = "Element space transform, includes the transform of the current element, which is also relative to the object."
	ELEMENT = 2,
};
