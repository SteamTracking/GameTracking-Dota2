class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public CDOTA_Buff
{
	Vector m_vWallDirection;
	Vector m_vWallRight;
	float32 wall_width;
	float32 formation_time;
	float32 wall_thickness;
	float32 tick_rate;
	int32 strike_on_touch;
};
