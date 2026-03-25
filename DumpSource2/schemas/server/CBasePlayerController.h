class CBasePlayerController : public CBaseEntity
{
	// MNotSaved
	uint64 m_nInButtonsWhichAreToggles;
	// MNotSaved
	uint32 m_nTickBase;
	CHandle< CBasePlayerPawn > m_hPawn;
	bool m_bKnownTeamMismatch;
	// MNotSaved
	CSplitScreenSlot m_nSplitScreenSlot;
	// MNotSaved
	CHandle< CBasePlayerController > m_hSplitOwner;
	// MNotSaved
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers;
	bool m_bIsHLTV;
	// MNotSaved
	PlayerConnectedState m_iConnected;
	// MNotSaved
	char[128] m_iszPlayerName;
	// MNotSaved
	CUtlString m_szNetworkIDString;
	// MNotSaved
	float32 m_fLerpTime;
	// MNotSaved
	bool m_bLagCompensation;
	// MNotSaved
	bool m_bPredict;
	// MNotSaved
	bool m_bIsLowViolence;
	// MNotSaved
	bool m_bGamePaused;
	// MNotSaved
	ChatIgnoreType_t m_iIgnoreGlobalChat;
	// MKV3TransferSaveOpsForField = "GetEngineTimeSaveRestoreOps"
	float32 m_flLastPlayerTalkTime;
	// MNotSaved
	float32 m_flLastEntitySteadyState;
	// MNotSaved
	int32 m_nAvailableEntitySteadyState;
	// MNotSaved
	bool m_bHasAnySteadyStateEnts;
	// MNotSaved
	uint64 m_steamID;
	bool m_bNoClipEnabled;
	uint32 m_iDesiredFOV;
};
