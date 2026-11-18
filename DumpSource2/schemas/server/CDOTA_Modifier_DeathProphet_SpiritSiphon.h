class CDOTA_Modifier_DeathProphet_SpiritSiphon : public CDOTA_Buff
{
	float32 flSmoothness;
	float32 damage;
	float32 max_health_damage_pct;
	int32 drain_range;
	float32 haunt_duration;
	int32 siphon_buffer;
	int32 attack_slow;
	int32 movement_slow;
	CHandle< CBaseEntity > m_hTarget;
	bool m_bIsHeroTarget;
	ParticleIndex_t m_iLinkIndex;
	int32 m_nSelfBuffSerialNumber;
	int32 m_nTargetDebuffSerialNumber;
};
