enum SmartPropChoiceSelectionMode_t : uint32_t
{
	// MPropertyFriendlyName = "Random"
	// MPropertyDescription = "Randomly pick a choice. If the choices have weights, the weights will be used to determine the probability of picking a given choice"
	RANDOM = 0,
	// MPropertyFriendlyName = "First"
	// MPropertyDescription = "Pick the first valid choice. Selection criteria may be added to a choice to determine if it is valid."
	FIRST = 1,
	// MPropertyFriendlyName = "Specific"
	// MPropertyDescription = "Pick a choice specified by an additional authored value."
	SPECIFIC = 2,
};
