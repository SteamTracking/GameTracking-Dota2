// MHasKV3TransferPolymorphicClassname
class ArtySpawnerDef_t : public ArtyGameObjectDef_t
{
	float32 m_flInitialDelay;
	float32 m_flDelayBetween; // = 5
	int32 m_nNumToSpawn; // = 1
	EArtyTeam m_eSpawnedUnitTeam; // = "k_eThem"
	CUtlString m_szGameObject;
};
