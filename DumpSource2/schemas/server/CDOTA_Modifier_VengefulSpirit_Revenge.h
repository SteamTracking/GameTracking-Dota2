class CDOTA_Modifier_VengefulSpirit_Revenge : public CDOTA_Buff
{
	int32 bonus_damage;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	CHandle< CDOTA_BaseNPC > m_hCurrentBuffHolder;
};
