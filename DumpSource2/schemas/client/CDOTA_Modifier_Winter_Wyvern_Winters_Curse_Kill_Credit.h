class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit : public CDOTA_Buff
{
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
	bool transfer_on_death;
};
