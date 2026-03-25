class CDOTA_Modifier_Clinkz_Tar_Bomb_SearingArrows : public CDOTA_Buff
{
	int32 damage_bonus;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	bool m_bBonusAttack;
};
