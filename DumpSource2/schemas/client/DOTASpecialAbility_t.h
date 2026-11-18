class DOTASpecialAbility_t
{
	char* m_pszName;
	char* m_pszValue;
	char* m_pszLevelKey;
	int32 m_nCount;
	float32[11] m_Values;
	uint8 m_eDisplayType;
	int32 m_nBonusesCount;
	DOTASpecialAbilityBonus_t[1] m_Bonuses;
	DOTASpecialAbilityBonus_t m_PerLevelUpBonus;
	DOTALevelingAbilityBonus_t m_ScepterBonus;
	DOTALevelingAbilityBonus_t m_ShardBonus;
	DOTAFacetAbilityBonus_t m_FacetBonus;
	CUtlStringToken m_strRequiredFacet;
	DAMAGE_TYPES m_nDamageTypeField;
	uint8 m_unLevelUpInterval;
	uint8 m_unLevelUpBonusRequiredLevel;
	float32 m_flLevelUpMaxValue;
	bool m_bSpellDamageField;
	bool m_bRequiresScepterField;
	bool m_bRequiresShardField;
	bool m_bAffectedByAoEIncrease;
	bool m_bDynamicValue;
	int8 m_nAffectedByCurio;
	bool m_bApplyEffectiveness;
	bool m_bShowAbsoluteValues;
};
