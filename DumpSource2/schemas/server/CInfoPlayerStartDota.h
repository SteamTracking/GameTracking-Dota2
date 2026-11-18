class CInfoPlayerStartDota : public CPointEntity
{
	bool m_bDisabled;
	int32 m_nTeamSlot;
	CEntityIOOutput m_OnEnabled;
	CEntityIOOutput m_OnDisabled;
};
