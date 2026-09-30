// MPropertyAutoExpandSelf
class CDOTABattleReportHighlightCompareContext_t
{
	// MPropertyDescription = "How to view the baseline data of the player's performance for comparison."
	CMsgBattleReport_CompareContext m_eCompareContext; // = "k_eAbsoluteValue"
	// MPropertyDescription = "Comparison Type for player score to baseline data or threshold value"
	EHighlightScoreComparison m_eComparisonType; // = "k_eScoreGreaterThanOrEqual"
	// MPropertyDescription = "Value for comparison using the selected context."
	// MPropertySuppressExpr = "m_eCompareContext != k_eAbsoluteValue"
	float32 m_flCompareValue;
};
