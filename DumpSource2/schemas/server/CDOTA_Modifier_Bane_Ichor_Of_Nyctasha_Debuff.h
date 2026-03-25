class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha_Debuff : public CDOTA_Buff
{
	bool m_bActive;
	float32 status_resistance;
	ParticleIndex_t m_nFXIndex;
	float32 damage_tick_rate;
};
