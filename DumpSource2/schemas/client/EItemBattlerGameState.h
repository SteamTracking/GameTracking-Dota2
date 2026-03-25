enum EItemBattlerGameState : uint32_t
{
	k_eGameState_Invalid = 0,
	k_eGameState_ChoosingEncounter = 1,
	k_eGameState_Encounter_Choice = 2,
	k_eGameState_Encounter_Shop = 3,
	k_eGameState_ChoosingMonster = 4,
	k_eGameState_SearchingForOpponent = 5,
	k_eGameState_ShowingOpponent = 6,
	k_eGameState_PreFight = 7,
	k_eGameState_Fight = 8,
	k_eGameState_PostFight = 9,
	k_eGameState_GameOver = 10,
};
