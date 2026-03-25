class CDOTABotChallengeGameMode : public CDOTABaseGameMode
{
	bool m_bRuleMidLaneOnly;
	bool m_bRuleEliteBotHeroes;
	bool m_bRuleMeteorStaff;
	bool m_bHasStartedEndgame;
	CHandle< CDOTA_BaseNPC > m_hRadiantAncientNPC;
	CHandle< CDOTA_BaseNPC > m_hDireAncientNPC;
	bool m_bRuleAncientsDuel;
	float32 m_flEndgameTime;
};
