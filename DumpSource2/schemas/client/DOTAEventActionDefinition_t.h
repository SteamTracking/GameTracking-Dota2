// MHasKV3TransferPolymorphicClassname
class DOTAEventActionDefinition_t : public EventActionDefinition_t
{
	CUtlString strSeasonActionName;
	CUtlString strLinkedChallenge;
	uint32 unPreviousAchievementActionID;
	bitfield:1 bAddToWebRequest;
	bitfield:1 bRequireInGameWinToIncrement;
	bitfield:1 bDoubleIncrementInNormalGames;
	bitfield:1 bRequiresPlusSubscription;
	bitfield:1 bAllowProgressInEventGame;
	bitfield:1 bIsLobbyNetworked;
	bitfield:1 bRequireClaimForFutureVNDialog; // = true
	uint32 unTeamID;
	CUtlString strVisualNovelDialogue;
};
