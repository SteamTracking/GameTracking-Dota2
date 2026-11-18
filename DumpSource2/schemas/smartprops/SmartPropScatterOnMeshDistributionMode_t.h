enum SmartPropScatterOnMeshDistributionMode_t : uint32_t
{
	// MPropertyFriendlyName = "Random"
	// MPropertyDescription = "Uniform Random Distribution. Can cause clumping of points on the surface."
	UNIFORM_RANDOM = 0,
	// MPropertyFriendlyName = "Evenly"
	// MPropertyDescription = "Poisson Disk Distribution. Points evenly spaced with no overlaps."
	POISSON_DISK = 1,
};
