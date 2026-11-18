class CDOTA_Modifier_Item_MonkeyKingBar : public CDOTA_Buff_Item
{
	int32 bonus_attack_speed;
	float32 bonus_chance;
	float32 bonus_chance_damage;
	float32 bonus_chance_damage_illu;
	int32 bonus_damage;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
