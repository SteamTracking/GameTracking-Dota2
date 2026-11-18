class CDOTA_Modifier_Pugna_LifeDrain_Caster : public CDOTA_Buff
{
	int32 m_nDrainID;
	CHandle< CBaseEntity > m_hTarget;
	CUtlVector< CHandle< CBaseEntity > > m_vecDrainedUnits;
};
