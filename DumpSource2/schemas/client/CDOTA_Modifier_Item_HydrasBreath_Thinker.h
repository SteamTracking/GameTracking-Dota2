class CDOTA_Modifier_Item_HydrasBreath_Thinker : public CDOTA_Buff
{
	float32 ground_duration;
	float32 poison_duration;
	float32 damage;
	float32 radius;
	bool m_bAttackLanded;
	ParticleIndex_t m_nFXIndex;
};
