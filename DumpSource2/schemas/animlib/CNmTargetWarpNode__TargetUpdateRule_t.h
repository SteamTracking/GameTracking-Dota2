enum CNmTargetWarpNode::TargetUpdateRule_t : uint8_t
{
	None = 0,
	// MPropertyFriendlyName = "Recalculate Warped Root Motion"
	Recalculate = 1,
	// MPropertyFriendlyName = "Offset Warped Root Motion"
	Offset = 2,
	// MPropertyFriendlyName = "Recalculate Or Offset Warped Root Motion"
	// MPropertyDescription = "Will offset the warped root motion if we are pass warp events"
	RecalculateOrOffset = 3,
};
