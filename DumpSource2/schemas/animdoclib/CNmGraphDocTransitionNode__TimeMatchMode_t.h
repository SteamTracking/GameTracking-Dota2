enum CNmGraphDocTransitionNode::TimeMatchMode_t : uint32_t
{
	None = 0,
	Synchronized = 1,
	MatchSourceSyncEventIndex = 2,
	MatchSourceSyncEventPercentage = 3,
	MatchSourceSyncEventIndexAndPercentage = 4,
	MatchSyncEventID = 5,
	MatchClosestSyncEventID = 6,
	MatchSyncEventIDAndPercentage = 7,
	MatchClosestSyncEventIDAndPercentage = 8,
	MatchTimeInSeconds = 9,
	OffsetTimeInSeconds = 10,
};
