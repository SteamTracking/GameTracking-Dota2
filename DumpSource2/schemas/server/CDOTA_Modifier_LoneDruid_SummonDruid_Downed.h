class CDOTA_Modifier_LoneDruid_SummonDruid_Downed : public CDOTA_Buff
{
	CHandle< CBaseEntity > m_hAttacker;
	float32 summon_lockout;
};
