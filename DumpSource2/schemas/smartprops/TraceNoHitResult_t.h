enum TraceNoHitResult_t : uint32_t
{
	// MPropertyFriendlyName = "Do nothing"
	// MPropertyDescription = "If no surface it hit, don't update the transform at all, act as if the trace was not performed."
	NOTHING = 0,
	// MPropertyFriendlyName = "Stop evaluation"
	// MPropertyDescription = "If no surface is hit stop evaluation of the current element, no following modifiers will be evaluated and the current transform will not be modified."
	DISCARD = 1,
	// MPropertyFriendlyName = "Move to start"
	// MPropertyDescription = "If no surface is hit move the current transform to the start of the trace."
	MOVE_TO_START = 2,
	// MPropertyFriendlyName = "Move to end"
	// MPropertyDescription = "If no surface is hit move the current transform to the end of the trace."
	MOVE_TO_END = 3,
};
