class C_BaseTrigger : public C_BaseToggle
{
	CEntityIOOutput m_OnStartTouch;
	CEntityIOOutput m_OnStartTouchAll;
	CEntityIOOutput m_OnEndTouch;
	CEntityIOOutput m_OnEndTouchAll;
	CEntityIOOutput m_OnTouching;
	CEntityIOOutput m_OnTouchingEachEntity;
	CEntityIOOutput m_OnNotTouching;
	CEntityIOOutput m_OnTouchingChanged;
	CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities;
	CUtlSymbolLarge m_iFilterName;
	bool m_bDisabled;
	CHandle< CBaseFilter > m_hFilter;
};
