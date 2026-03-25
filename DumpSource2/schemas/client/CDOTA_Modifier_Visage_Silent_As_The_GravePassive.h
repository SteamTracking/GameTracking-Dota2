class CDOTA_Modifier_Visage_Silent_As_The_GravePassive : public CDOTA_Buff
{
	int32 movespeed_bonus;
	float32 fly_timer;
	bool m_bFlying;
	GameTime_t m_FlyAvailableTime;
};
