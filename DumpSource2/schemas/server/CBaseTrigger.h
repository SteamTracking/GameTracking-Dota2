class CBaseTrigger : public CBaseToggle
{
	CEntityIOOutput m_OnStartTouch;
	CEntityIOOutput m_OnStartTouchAll;
	CEntityIOOutput m_OnEndTouch;
	CEntityIOOutput m_OnEndTouchAll;
	CEntityIOOutput m_OnTouching;
	CEntityIOOutput m_OnTouchingEachEntity;
	CEntityIOOutput m_OnNotTouching;
	CEntityIOOutput m_OnTouchingChanged;
	CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities;
	CUtlSymbolLarge m_iFilterName;
	bool m_bDisabled;
	CHandle< CBaseFilter > m_hFilter;
	bool m_bUseAsyncQueries;
};
