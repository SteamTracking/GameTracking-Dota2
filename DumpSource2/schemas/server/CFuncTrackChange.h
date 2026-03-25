class CFuncTrackChange : public CFuncPlatRot
{
	CHandle< CPathTrack > m_trackTop;
	CHandle< CPathTrack > m_trackBottom;
	CHandle< CFuncTrackTrain > m_train;
	CUtlSymbolLarge m_trackTopName;
	CUtlSymbolLarge m_trackBottomName;
	CUtlSymbolLarge m_trainName;
	TRAIN_CODE m_code;
	int32 m_targetState;
	int32 m_use;
};
