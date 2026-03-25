class CSkyCamera : public CBaseEntity
{
	// MNotSaved
	sky3dparams_t m_skyboxData;
	CUtlStringToken m_skyboxSlotToken;
	bool m_bUseAngles;
	// MNotSaved
	CSkyCamera* m_pNext;
};
