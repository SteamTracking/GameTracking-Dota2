class CDOTA_Modifier_VengefulSpirit_Revenge : public CDOTA_Buff
{
	int32 bonus_damage;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	CHandle< C_DOTA_BaseNPC > m_hCurrentBuffHolder;
};
