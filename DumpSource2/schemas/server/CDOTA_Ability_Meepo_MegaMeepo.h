class CDOTA_Ability_Meepo_MegaMeepo : public CDOTABaseAbility
{
	CHandle< CBaseEntity > hPreviousMeepo;
	CHandle< CBaseEntity > hMegameepoFrame;
	CUtlVector< CHandle< CBaseEntity > > hListOfMeepos;
	CUtlVector< int32 > hFlingHandles;
	bool m_bHasSwappedAbilities;
};
