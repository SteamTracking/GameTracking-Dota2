class CDOTA_Modifier_Disruptor_KineticField : public CDOTA_Buff
{
	float32 radius;
	float32 wall_thickness;
	float32 tick_rate;
	int32 strike_on_touch;
	Vector m_vOriginLoc;
	bool m_bTruesight;
	Vector m_vOrigin;
	Vector m_vWallRight;
};
