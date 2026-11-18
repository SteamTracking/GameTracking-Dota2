class CDOTA_Modifier_StoneOfRecall_Channel : public CDOTA_Buff
{
	CHandle< CBaseEntity > m_hStone;
	ParticleIndex_t m_nFXDestination;
	ParticleIndex_t m_nFXOrigin;
	ParticleIndex_t m_nFXCaster;
};
