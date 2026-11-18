class ScatterOnMeshSizeClass_t
{
	// MPropertyFriendlyName = "Radius"
	// MPropertyDescription = "Radius of points in this size class."
	// MPropertyAttributeRange = "biased 0 1024"
	CSmartPropAttributeFloat m_flRadius; // = 16
	// MPropertyFriendlyName = "Weight"
	// MPropertyDescription = "Relative weight of this size class, higher weighted classes receive a larger share of the points."
	CSmartPropAttributeFloat m_flWeight; // = 1
};
