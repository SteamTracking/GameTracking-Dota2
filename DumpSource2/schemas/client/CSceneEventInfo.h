class CSceneEventInfo
{
	int32 m_iLayer;
	int32 m_iPriority;
	HSequence m_hSequence;
	float32 m_flWeight;
	float32 m_flLastAccumulatedTime;
	float32 m_flLastJumpFromTime;
	float32 m_flLastJumpToTime;
	float32 m_flLastCycle;
	CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip;
	CGlobalSymbol m_sAnimClipSlot;
	CGlobalSymbol m_sAnimClipSlotWeight;
	bool m_bHasArrived;
	bool m_bExternalGraphFinished;
	int32 m_nType;
	GameTime_t m_flNext;
	bool m_bIsGesture;
	bool m_bShouldRemove;
	CHandle< C_BaseEntity > m_hTarget;
	SceneEventId_t m_nSceneEventId;
	bool m_bClientSide;
	bool m_bStarted;
};
