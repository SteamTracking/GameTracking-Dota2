enum SmartPropCastShadowsMode_t : uint32_t
{
	// MPropertyFriendlyName = "Default"
	// MPropertyDescription = "Default shadows enabled. Baked for static models, dynamic for dynamic entities."
	DEFAULT = 0,
	// MPropertyFriendlyName = "No Shadows"
	// MPropertyDescription = "Do not cast any shadows."
	NONE = 1,
	// MPropertyFriendlyName = "Only Baked"
	// MPropertyDescription = "Only cast shadows into lightmap. Do not cast dynamic shadows"
	ONLY_BAKED = 2,
	// MPropertyFriendlyName = "Only Dynamic"
	// MPropertyDescription = "Only cast dynamic shadows. Do not cast shadows into lightmap."
	ONLY_REAL_TIME = 3,
	// MPropertyFriendlyName = "Baked and Dynamic"
	// MPropertyDescription = "Bake shadows into lightmap and cast dynamic shadows (expensive)."
	BAKED_AND_REALTIME = 4,
};
