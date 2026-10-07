class C_DOTA_Ability_Wisp_Tether : public C_DOTABaseAbility
{
	CHandle< C_BaseEntity > m_hTarget;
	VectorWS m_vProjectileLocation;
	bool m_bProjectileActive;
	int32 latch_distance;
	int32 m_iProjectileIndex;
};
