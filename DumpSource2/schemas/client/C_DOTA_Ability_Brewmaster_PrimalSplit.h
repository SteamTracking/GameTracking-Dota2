class C_DOTA_Ability_Brewmaster_PrimalSplit : public C_DOTABaseAbility
{
	CHandle< C_BaseEntity > m_hPrimary;
	CHandle< C_BaseEntity > m_hSecondary;
	CHandle< C_BaseEntity > m_hTertiary;
	GameTime_t m_fHurlBoulder_CooldownTime;
	GameTime_t m_fHDispelMagic_CooldownTime;
	GameTime_t m_fCyclone_CooldownTime;
	GameTime_t m_fWindWalk_CooldownTime;
	bool m_bGainedScepterLevels;
};
