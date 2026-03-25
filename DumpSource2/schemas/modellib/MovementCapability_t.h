enum MovementCapability_t : uint32_t
{
	// MPropertyFriendlyName = "Strafe"
	eStrafe = 0,
	// MPropertyFriendlyName = "Turn"
	eIdleTurn = 1,
	// MPropertyFriendlyName = "Start"
	eStart = 2,
	// MPropertyFriendlyName = "Stop"
	eStop = 3,
	// MPropertyFriendlyName = "Instant Stop"
	eInstantStop = 4,
	// MPropertyFriendlyName = "Shuffle"
	eShuffle = 5,
	// MPropertyFriendlyName = "Planted Turn"
	ePlantedTurn = 6,
	// MPropertyFriendlyName = "Stop/Start Planted Turn"
	eUseStartAsPlantedTurn = 7,
	// MPropertyFriendlyName = "Lean"
	eLean = 8,
	// MPropertySuppressEnumerator
	eCount = 9,
};
