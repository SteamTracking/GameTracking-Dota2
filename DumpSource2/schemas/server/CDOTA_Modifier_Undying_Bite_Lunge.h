class CDOTA_Modifier_Undying_Bite_Lunge : public CDOTA_Buff
{
	CHandle< CDOTA_BaseNPC > m_hTarget;
	VectorWS m_vTargetPos;
	float32 m_flSpeed;
	float32 m_flDistanceLeft;
	float32 m_flTargetHullRadius;
	bool m_bLunging;
};
