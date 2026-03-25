class CDOTA_Modifier_Abaddon_Withering_Mist_Debuff : public CDOTA_Buff
{
	float32 heal_reduction_pct;
	float32 hp_threshold_pct;
	ParticleIndex_t m_nFXIndex;
	bool bUnderThreshold;
};
