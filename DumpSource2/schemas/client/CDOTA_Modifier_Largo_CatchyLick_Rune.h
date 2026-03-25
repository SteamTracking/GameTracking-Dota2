class CDOTA_Modifier_Largo_CatchyLick_Rune : public CDOTA_Buff
{
	float32 pull_duration;
	float32 pull_distance_ally;
	CHandle< C_BaseEntity > m_hRune;
	Vector m_vOriginalPos;
	Vector m_vDestination;
};
