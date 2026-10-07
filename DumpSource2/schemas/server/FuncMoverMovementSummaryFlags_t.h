enum FuncMoverMovementSummaryFlags_t : uint32_t
{
	// MEnumeratorIsNotAFlag
	eNone = 0,
	eMovementBegin = 1,
	eStopBegin = 2,
	eStopComplete = 4,
	eReversing = 8,
	eEventsDispatched = 16,
	eLoopToStart = 32,
	eLoopToEnd = 64,
	eTransitionComplete = 128,
	eStoppedDuringTransition = 256,
};
