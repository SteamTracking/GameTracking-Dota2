class CDOTA_Modifier_Alchemist_GoblinsGreed : public CDOTA_Buff
{
	CUtlVector< GameTime_t > m_DeathList;
	float32 damage;
	float32 duration;
	int32 bonus_gold;
	int32 bonus_bonus_gold;
	int32 bonus_gold_cap;
	int32 bonus_gold_per_scepter;
	int32 scepter_bonus_damage;
};
