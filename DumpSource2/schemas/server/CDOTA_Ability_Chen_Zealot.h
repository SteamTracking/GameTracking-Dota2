class CDOTA_Ability_Chen_Zealot : public CDOTABaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecZealots;
	CUtlString m_strZealotUnitName;
	bool m_bSpawnedInitialZealot;
};
