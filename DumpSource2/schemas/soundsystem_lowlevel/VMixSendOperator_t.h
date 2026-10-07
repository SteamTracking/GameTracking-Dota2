enum VMixSendOperator_t : uint16_t
{
	// MPropertySuppressEnumerator
	NO_VOICES = -1,
	// MPropertyFriendlyName = "All"
	ALL_VOICES = 0,
	// MPropertyFriendlyName = "Room Voices"
	ROOM_VOICES = 1,
	// MPropertyFriendlyName = "Facing Voices"
	FACING_VOICES = 2,
	// MPropertyFriendlyName = "By Mixgroup"
	MIXGROUP_VOICES = 3,
	// MPropertyFriendlyName = "By Named Send"
	NAMED_SEND = 4,
	// MPropertyFriendlyName = "1 - (Sum of Named Sends)"
	INVERSE_NAMED_SENDS = 5,
	// MPropertyFriendlyName = "1 - (Sum of all sends)"
	INVERSE_TOTAL_SEND = 6,
	// MPropertyFriendlyName = "All Voices with max Send Value"
	ALL_MAX_SEND = 7,
	// MPropertyFriendlyName = "Send To Track"
	TRACK = 8,
};
