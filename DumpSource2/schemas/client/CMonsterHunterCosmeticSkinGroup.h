class CMonsterHunterCosmeticSkinGroup
{
	CUtlString m_strSetName;
	CUtlVector< uint32 > m_vecActionIDSlots;
	bool m_bRequiresPremium;
	bool m_bShowPremiumPurchaseAsCrafting;
	CUtlString m_strCustomClass;
	CUtlString m_strCustomStyleSelectAnimation;
	float32 m_flAnimationFreezeTime; // = -1
	float32 m_flCustomStyleSelectRotation;
	item_definition_index_t m_unPreviewItemIndex;
};
