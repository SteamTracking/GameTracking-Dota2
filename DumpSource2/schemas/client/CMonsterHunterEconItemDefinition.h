class CMonsterHunterEconItemDefinition
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_econ_item"
	// MPropertyAttributeEditor = "locked_int()"
	MonsterHunterEconItemID_t m_unEconItemID;
	CUtlString m_strEconItemNavigationName;
	// MPropertyDescription = "Custom panorama classes associated with relevant dashboard elements."
	CUtlString m_strCustomClass;
	// MPropertyDescription = "Optional item used for preview purposes. If left empty, will use the first slot."
	item_definition_index_t m_unPreviewItemIndex;
	int32 m_nPreviewPremiumCosmeticGroupIndex; // = 1
	CUtlVector< CMonsterHunterCosmeticSkinGroup > m_vecCosmeticSkinGroups;
	float32 m_flPreviewModelRotation;
	float32 m_flPreviewModelZoom; // = 100
	bool m_bHasDetailedView;
	bool m_bCosmeticGroupsNeedToBeCraftedInOrder; // = true
};
