class C_DOTA_Ability_Tinker_Laser : public C_DOTABaseAbility
{
	VectorWS m_vProjectileLocation;
	bool bBlocked;
	CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities;
};
