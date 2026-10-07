class C_DOTA_Ability_BountyHunter_Big_Game_Hunter : public C_DOTABaseAbility
{
	PlayerID_t m_iFirstPlayer;
	PlayerID_t m_iSecondPlayer;
	PlayerID_t m_iThirdPlayer;
	CUtlVector< PlayerID_t > m_CurrentTopPlayers;
};
