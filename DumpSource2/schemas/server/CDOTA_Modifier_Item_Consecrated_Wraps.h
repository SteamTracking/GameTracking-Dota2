class CDOTA_Modifier_Item_Consecrated_Wraps : public CDOTA_Buff_Item
{
	float32 bonus_spell_resist;
	float32 bonus_regen;
	int32 bonus_health;
	int32 bonus_all_stats;
	float32 stack_threshold_damage;
	float32 duration;
	bool damage_must_be_player_owned_or_roshan;
};
