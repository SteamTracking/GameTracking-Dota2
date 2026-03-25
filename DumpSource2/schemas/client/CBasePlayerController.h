class CBasePlayerController : public C_BaseEntity
{
	// MNotSaved
	C_CommandContext m_CommandContext;
	// MNotSaved
	uint64 m_nInButtonsWhichAreToggles;
	// MNotSaved
	uint32 m_nTickBase;
	CHandle< C_BasePlayerPawn > m_hPawn;
	bool m_bKnownTeamMismatch;
	// MNotSaved
	CHandle< C_BasePlayerPawn > m_hPredictedPawn;
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
	uint64 m_steamID;
	// MNotSaved
	bool m_bIsLocalPlayerController;
	bool m_bNoClipEnabled;
	uint32 m_iDesiredFOV;
};
