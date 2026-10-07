class C_DOTA_Ability_Huskar_Life_Break : public C_DOTABaseAbility
{
	int32 m_nLifeBreakProjectileHandle;
	VectorWS m_vProjectileLocation;
	CHandle< C_BaseEntity > m_hTarget;
	bool m_bInterrupted;
};
