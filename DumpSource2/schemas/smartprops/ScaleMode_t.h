enum ScaleMode_t : uint32_t
{
	// MPropertyFriendlyName = "No scaling"
	// MPropertyDescription = "Do not allow selected elements to be scaled, the parts may not fit the line exactly"
	NONE = 0,
	// MPropertyFriendlyName = "Scale last"
	// MPropertyDescription = "Apply scale to the last element in order to fit the line. Only proceed to scale additional elements if the scale range of the last element is not sufficient."
	SCALE_END_TO_FIT = 1,
	// MPropertyFriendlyName = "Scale equally"
	// MPropertyDescription = "Attempt to apply the same amount of scale to all of the elements placed on the line while still respecting their size constraints."
	SCALE_EQUALLY = 2,
	// MPropertyFriendlyName = "Maximize scale"
	// MPropertyDescription = "Each element will be scaled to is maximum allowable size that will still fit on the line."
	SCALE_MAXIMIZE = 3,
};
