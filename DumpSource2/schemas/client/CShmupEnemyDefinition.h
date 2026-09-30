// MVDataRoot
class CShmupEnemyDefinition
{
	CUtlString m_strNameInMap;
	int32 m_nHealth; // = 1
	float32 m_flHitboxRadius; // = 1
	Vector m_vHitboxOffsetWS;
	int32 m_nKillScore;
	float32 m_flModelScale; // = 1
	bool m_bIsBoss;
	// MPropertySuppressExpr = "m_type != k_eShmupPathEventType_Shoot"
	CUtlVector< CShmupBulletInfo > m_vecBulletPatterns;
	CUtlVector< CShmupBulletInfo > m_vecOnDeathBulletPatterns;
	CUtlVector< CShmupBulletInfo > m_vecSelfDestroyBulletPatterns;
};
