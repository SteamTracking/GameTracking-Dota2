class CDOTA_Modifier_ChaosKnight_Armaggedons_Flank_Horse_Jump : public CDOTA_Buff
{
	float32 jump_duration;
	float32 jump_height;
	float32 jump_horizontal_distance;
	float32 m_flStartZ;
	float32 m_flCurTime;
	float32 m_flJumpDuration;
	float32 m_flJumpHeight;
	Vector m_vTargetHorizontalDirection;
	bool m_bVerticalOnly;
};
