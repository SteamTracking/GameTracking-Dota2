class CDOTA_Modifier_Visage_GravekeepersCloak : public CDOTA_Buff
{
	float32 damage_reduction;
	int32 max_layers;
	float32 minimum_damage;
	int32 recovery_time;
	float32 radius;
	float32 max_damage_reduction;
	int32 armor;
	ParticleIndex_t[4] m_nFXIndex;
	ParticleIndex_t m_nFXIndexB;
	CUtlVector< CDOTA_Modifier_Visage_GravekeepersCloak_Stack* > m_vecStacks;
};
