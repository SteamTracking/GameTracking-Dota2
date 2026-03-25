class CDOTA_Modifier_StormSpirit_Enemy_Overload : public CDOTA_Buff
{
	float32 overload_aoe;
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits;
	AttackRecord_t m_nAttackRecordIndex;
};
