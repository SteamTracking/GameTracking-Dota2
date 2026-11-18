class C_DOTA_Ability_Chen_Zealot : public C_DOTABaseAbility
{
	CUtlVector< CHandle< C_BaseEntity > > m_vecZealots;
	CUtlString m_strZealotUnitName;
	bool m_bSpawnedInitialZealot;
};
