class CDOTA_Modifier_Item_Consecrated_Wraps : public CDOTA_Buff_Item
{
	float32 bonus_spell_resist;
	float32 bonus_regen;
	int32 bonus_health;
	int32 bonus_all_stats;
	float32 stack_threshold_damage;
	float32 stack_gain_time;
	int32 max_stacks;
	float32 duration;
	float32 barrier_cd;
	GameTime_t m_flLastHealTime;
	bool b_HasReachedMaxStacks;
};
