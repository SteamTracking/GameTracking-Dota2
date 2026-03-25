class CDOTA_Modifier_SpiritBreaker_PlanarPocketAura : public CDOTA_Buff
{
	bool m_bHasActivated;
	CHandle< CBaseEntity > m_hTarget;
	float32 radius;
	int32 magic_resistance;
	float32 break_distance;
};
