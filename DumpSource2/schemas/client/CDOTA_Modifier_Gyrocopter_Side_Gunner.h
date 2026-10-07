class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff
{
	CHandle< C_BaseEntity > m_hIdealTarget;
	float32 sidegunner_radius;
	float32 sidegunner_fire_rate;
	float32 m_flRotation;
	CHandle< C_BaseEntity > m_hSecondaryTarget;
	float32 m_flLastFireTime;
	CHandle< C_BaseEntity > m_hOwnerNPC;
	CHandle< C_BaseEntity > m_hOwningAbility;
	int32 m_nSideGunnerIndex;
};
