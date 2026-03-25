class CDOTA_Modifier_Item_Imbue_Choice : public CDOTA_Buff
{
	int32 m_nBehaviorFlagRequired;
	int32 m_nTeamTargetRequired;
	bool m_bCastRangeRequired;
	bool m_bAOERequired;
	AbilityID_t m_nItemID;
};
