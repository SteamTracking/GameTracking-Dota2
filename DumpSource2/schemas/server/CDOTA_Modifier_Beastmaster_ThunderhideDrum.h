class CDOTA_Modifier_Beastmaster_ThunderhideDrum : public CDOTA_Buff
{
	float32 aura_radius;
	int32 max_stacks;
	float32 stack_decay_time;
	GameTime_t m_flLastStackChangeTime;
};
