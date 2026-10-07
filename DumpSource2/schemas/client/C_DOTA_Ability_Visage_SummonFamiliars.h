class C_DOTA_Ability_Visage_SummonFamiliars : public C_DOTABaseAbility
{
	char[260] szUnitName;
	CUtlVector< CHandle< C_BaseEntity > > m_hExistingUnits;
	bool m_bGainedTalentDamage;
};
