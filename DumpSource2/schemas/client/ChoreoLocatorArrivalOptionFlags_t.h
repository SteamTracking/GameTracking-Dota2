enum ChoreoLocatorArrivalOptionFlags_t : uint16_t
{
	// MPropertySuppressEnumerator
	eLocatorArrivalOption_None = 0,
	// MPropertyFriendlyName = "Don't Stop At Goal"
	// MPropertyDescription = "The entity won't play a stopping animation upon reaching the destination"
	eLocatorArrivalOption_DontStopAtGoal = 1,
	// MPropertyFriendlyName = "Ignore Arrival Facing"
	// MPropertyDescription = "The entity will not turn to face the destination facing direction"
	eLocatorArrivalOption_IgnoreArrivalFacing = 2,
	// MPropertyFriendlyName = "Smooth Arrival Path"
	// MPropertyDescription = "The entity will generate a path that might be longer, but has them arriving at the destination already facing the correct way"
	eLocatorArrivalOption_SmoothArrivalPath = 4,
};
