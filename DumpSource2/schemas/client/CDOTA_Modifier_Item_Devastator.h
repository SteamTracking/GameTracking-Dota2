class CDOTA_Modifier_Item_Devastator : public CDOTA_Buff_Item
{
	int32 bonus_armor;
	int32 projectile_speed;
	int32 bonus_intellect;
	int32 bonus_attack_speed;
	float32 bonus_mana_regen;
	int32 mana_cost;
	float32 slow_duration;
	int32 spell_amp_duration;
	int32 damage_penalty;
	float32 passive_cooldown;
	float32 reduction_duration;
	CUtlVector< AttackRecord_t > m_InFlightWitchBladeAttackRecords;
};
