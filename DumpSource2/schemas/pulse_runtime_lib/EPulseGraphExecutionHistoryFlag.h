enum EPulseGraphExecutionHistoryFlag : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	NO_FLAGS = 0,
	CURSOR_ADD_TAG = 1,
	CURSOR_REMOVE_TAG = 2,
	CURSOR_RETIRED = 4,
	CURSOR_CREATE_CHILD = 8,
	REQUIREMENT_PASS = 16,
	REQUIREMENT_FAIL = 32,
	CALL_TO_PULSE = 64,
	RETURN = 128,
};
