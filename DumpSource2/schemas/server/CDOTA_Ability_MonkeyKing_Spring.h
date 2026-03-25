class CDOTA_Ability_MonkeyKing_Spring : public CDOTABaseAbility
{
	VectorWS m_vPos;
	GameTime_t m_fStartChannelTime;
	CHandle< CBaseEntity > m_hThinker;
	ParticleIndex_t m_nFxIndex;
	int32 m_nRefCount;
};
