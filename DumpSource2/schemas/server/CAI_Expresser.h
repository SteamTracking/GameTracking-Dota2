class CAI_Expresser
{
	// MKV3TransferSaveOpsForField = "GetConceptCooldownSaveDataOps"
	CUtlDict< GameTime_t > m_conceptCooldowns;
	// MKV3TransferSaveOpsForField = "GetRuleCooldownSaveDataOps"
	CUtlDict< GameTime_t > m_ruleCooldowns;
	GameTime_t m_flStopTalkTime;
	GameTime_t m_flStopTalkTimeWithoutDelay;
	GameTime_t m_flQueuedSpeechTime;
	GameTime_t m_flBlockedTalkTime;
	int32 m_voicePitch;
	GameTime_t m_flLastTimeAcceptedSpeak;
	bool m_bAllowSpeakingInterrupts;
	bool m_bConsiderSceneInvolvementAsSpeech;
	bool m_bSceneEntityDisabled;
	int32 m_nLastSpokenPriority;
	// MNotSaved
	CBaseModelEntity* m_pOuter;
};
