class CMonsterHunterTradeRecipeDefinition
{
	EMonsterHunterMaterialTradeConversion m_eTradeConversion; // = "k_eMonsterHunterMaterialTradeConversion_Invalid"
	int32 m_nOfferCount; // = 1
	int32 m_nResultCount; // = 1
	bool m_bOfferTokensMustBeTheSame;
	bool m_bCanChooseResult;
	CUtlString m_strLocTitle;
	CUtlString m_strDescription;
	uint32 m_unUnlockPrerequisiteActionID;
	uint32 m_unResultActionID;
	EMonsterHunterMaterialRarity m_eRequiredOfferRarity; // = "k_eMonsterHunterMaterialRarity_Invalid"
};
