enum SmartPropLightingMode_t : uint32_t
{
	// MPropertyFriendlyName = "Default"
	// MPropertyDescription = "Select the default lighting model based on the model type (static or dynamic)."
	DEFAULT = 0,
	// MPropertyFriendlyName = "Lightprobe"
	// MPropertyDescription = "Use light probes to light the model even if it is static."
	LIGHTPROBE = 1,
	// MPropertyFriendlyName = "Lightmap"
	// MPropertyDescription = "Light with lightmaps."
	LIGHTMAP = 2,
};
