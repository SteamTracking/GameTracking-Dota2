class CDOTA_Modifier_Broodmother_WebWalk_Thinker : public CDOTA_Buff
{
	float32 snare_radius;
	float32 debuff_duration;
	ParticleIndex_t m_nFXIndex;
	CHandle< C_BaseEntity > m_hTrapConnection;
};
