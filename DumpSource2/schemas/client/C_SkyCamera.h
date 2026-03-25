class C_SkyCamera : public C_BaseEntity
{
	// MNotSaved
	sky3dparams_t m_skyboxData;
	CUtlStringToken m_skyboxSlotToken;
	bool m_bUseAngles;
	// MNotSaved
	C_SkyCamera* m_pNext;
};
