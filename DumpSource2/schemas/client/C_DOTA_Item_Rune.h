class C_DOTA_Item_Rune : public CBaseAnimatingActivity
{
	int32 m_iRuneType;
	GameTime_t m_flRuneTime;
	int32 m_nMapLocationTeam;
	char[512] m_szLocation;
	int32 m_iOldRuneType;
	bool m_bShowingTooltip;
};
