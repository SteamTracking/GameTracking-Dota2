class PulseGraphExecutionHistoryCursorDesc_t
{
	PulseCursorID_t nCursorID; // = -1
	CUtlVector< PulseCursorID_t > vecAncestorCursorIDs;
	PulseDocNodeID_t nSpawnNodeID; // = -1
	PulseDocNodeID_t nRetiredAtNodeID; // = -1
	PulseExecHistoryCallerInfo_t externalCallerInfo;
	CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory;
	float32 flLastReferenced;
	bool bWasAnObservableComputation;
	bool bOverflowedInstructionHistoryLimit;
};
