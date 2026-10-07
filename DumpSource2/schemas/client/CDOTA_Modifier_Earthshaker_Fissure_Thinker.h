class CDOTA_Modifier_Earthshaker_Fissure_Thinker : public CDOTA_Buff
{
	float32 free_pathing_linger_duration;
	bool free_pathing_all_allies;
	CUtlVector< CHandle< C_BaseEntity > > m_vecAllies;
};
