// MHasKV3TransferPolymorphicClassname
class ArtyLevelObjectInstance_t : public ArtyGameObjectInstance_t
{
	CUtlString m_szLeftBorderObject;
	float32 m_flLeftObjectOffset; // = 64
	CUtlString m_szRightBorderObject;
	float32 m_flRightObjectOffset; // = 64
	bool m_bRandomPosition; // = true
	bool m_bRepositionToTerrain; // = true
	float32 m_flLeftBorderWidthMult; // = 0.5
	float32 m_flRightBorderWidthMult; // = 0.975
	float32 m_flAppearanceChance; // = 1
	EArtyTeam m_eTeam; // = "k_eThem"
	float32 m_flTimeOffset; // = 2
	CUtlVector< ArtyEnemyOrder_t > m_vecCustomOrders;
};
