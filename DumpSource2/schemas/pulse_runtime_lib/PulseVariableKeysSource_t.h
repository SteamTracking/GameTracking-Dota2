enum PulseVariableKeysSource_t : uint32_t
{
	// MPropertyFriendlyName = "Private"
	PRIVATE = 0,
	// MPropertyFriendlyName = "Code"
	CPP = 1,
	// MPropertyFriendlyName = "Parent Map"
	VMAP = 2,
	// MPropertyFriendlyName = "Parent VMDL"
	VMDL = 3,
	// MPropertyFriendlyName = "Parent XML"
	XML = 4,
	// MPropertyFriendlyName = "Parent VData"
	VDATA = 5,
	// MPropertyFriendlyName = "Parent Map + VData"
	VMAP_AND_VDATA = 6,
	// MPropertySuppressEnumerator
	COUNT = 7,
};
