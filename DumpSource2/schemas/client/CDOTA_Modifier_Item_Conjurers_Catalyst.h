class CDOTA_Modifier_Item_Conjurers_Catalyst : public CDOTA_Buff
{
	float32 damage_aoe;
	float32 damage;
	float32 damage_creep;
	float32 damage_threshold;
	bool has_hands;
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_nFXIndexB;
};
