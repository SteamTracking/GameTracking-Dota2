class CDOTA_Item_Rune : public CBaseAnimatingActivity
{
	CHandle< CBaseEntity > m_hRuneSpawner;
	int32 m_iRuneType;
	GameTime_t m_flRuneTime;
	int32 m_nMapLocationTeam;
	char[512] m_szLocation;
};
