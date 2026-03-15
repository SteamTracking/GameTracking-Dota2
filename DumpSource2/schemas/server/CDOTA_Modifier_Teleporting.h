class CDOTA_Modifier_Teleporting : public CDOTA_Buff
{
	float32 m_fStartTime;
	char[260] m_iszPortalLoopAppear;
	char[260] m_iszPortalLoopDisappear;
	char[260] m_iszHeroLoopAppear;
	char[260] m_iszHeroLoopDisappear;
	bool m_bSkipTeleportAnim;
	bool m_bPlayingCoopAnim;
	bool m_bIsPlayingTauntGesture;
	float32 m_fChannelTime;
	Vector m_vStart;
	Vector m_vEnd;
};
