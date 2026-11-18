class CDOTA_Modifier_XP_Fountain_Defenders_Gate : public CDOTA_Buff
{
	CUtlVector< CHandle< CBaseEntity > > m_vecBlockers;
	int32 team_number;
	ParticleIndex_t m_nFXIndex;
	float32 radius;
};
