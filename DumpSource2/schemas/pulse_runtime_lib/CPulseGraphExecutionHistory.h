class CPulseGraphExecutionHistory
{
	PulseGraphInstanceID_t m_nInstanceID;
	CUtlString m_strFileName;
	CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc;
	CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc;
	CUtlOrderedMap< PulseDocNodeID_t, CUtlVector< int32 > > m_mapNodeToNewCursorCount;
	int32 m_nCulledCursorCount;
};
