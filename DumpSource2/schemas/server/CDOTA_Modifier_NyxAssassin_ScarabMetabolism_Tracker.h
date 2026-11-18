class CDOTA_Modifier_NyxAssassin_ScarabMetabolism_Tracker : public CDOTA_Buff
{
	float32 out_of_combat_time;
	int32 breaks_on_damage;
	GameTime_t m_flLastCombatTime;
};
