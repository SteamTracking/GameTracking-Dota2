class CDOTA_Modifier_Item_MonkeyKingBar : public CDOTA_Buff_Item
{
	int32 bonus_attack_speed;
	int32 bonus_chance;
	int32 bonus_chance_damage;
	int32 bonus_damage;
	int32 melee_attack_range;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
