// MVDataRoot
class CDOTAOverworldEncounter
{
	CUtlString m_sName;
	CUtlString m_sTemplate;
	CUtlString m_sLocName;
	CUtlString m_sLocDescription;
	CPanoramaImageName m_sImage;
	EOverworldEncounterRewardStyle m_eRewardStyle; // = "k_eOverworldEncounterRewardStyle_Invalid"
	CUtlVector< CDOTAOverworldEncounterReward > m_vecRewards;
	CUtlString m_sDefaultDialogue;
	KeyValues3 m_kvCustomData;
	bool m_bRequiresNodeToBeUnlockedToClaimRewards; // = true
	int32 m_nLeaderboardCount; // = 1
};
