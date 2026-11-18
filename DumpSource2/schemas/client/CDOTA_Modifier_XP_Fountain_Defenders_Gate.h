class CDOTA_Modifier_XP_Fountain_Defenders_Gate : public CDOTA_Buff
{
	CUtlVector< CHandle< C_BaseEntity > > m_vecBlockers;
	int32 team_number;
	ParticleIndex_t m_nFXIndex;
	float32 radius;
};
