class CGameRules
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	char[128] m_szQuestName;
	int32 m_nQuestPhase;
	uint32 m_nLastMatchTime;
	uint64 m_nLastMatchTime_MatchID64;
	int32 m_nTotalPausedTicks;
	int32 m_nPauseStartTick;
	bool m_bGamePaused;
};
