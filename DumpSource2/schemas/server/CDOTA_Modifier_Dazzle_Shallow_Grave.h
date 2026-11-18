class CDOTA_Modifier_Dazzle_Shallow_Grave : public CDOTA_Buff
{
	bool m_bHasPostedEvent;
	ParticleIndex_t m_nFXIndex;
	float32 fx_halo_height;
	float32 m_flExpirationHeal;
	int32 heal_amplify;
	int32 attack_speed_per_missing_health;
};
