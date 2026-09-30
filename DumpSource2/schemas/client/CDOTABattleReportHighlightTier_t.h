// MPropertyAutoExpandSelf
class CDOTABattleReportHighlightTier_t
{
	// MPropertyDescription = "Tier of the Reward"
	CMsgBattleReport_HighlightTier m_eTier; // = "k_eHighlightTier1"
	// MPropertyDescription = "Compare Contexts to Achieve Tier"
	// MPropertyAutoExpandSelf
	CUtlVector< CDOTABattleReportHighlightCompareContext_t > m_vecCompareContexts;
};
