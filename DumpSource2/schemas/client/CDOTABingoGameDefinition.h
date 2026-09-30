// MVDataRoot
class CDOTABingoGameDefinition
{
	EEvent m_eEvent; // = "EVENT_ID_NONE"
	LeagueID_t m_unLeagueID;
	int32 m_nShuffleCardCost; // = 1
	int32 m_nRerollSquareCost; // = 1
	int32 m_nUpgradeSquareCost; // = 1
	int32 m_nMaxSquareUpgrades; // = 1
	CUtlVector< float32 > m_vecExpectedMatchCountsPerPhase;
	CUtlVector< uint32 > m_vecLeaguePhases;
	CUtlVector< CUtlVector< int32 > > m_vecValidStatRangesPerPhase;
	CUtlOrderedMap< CUtlString, CDOTABingoStatDefinition > m_mapBingoStatsByName;
};
