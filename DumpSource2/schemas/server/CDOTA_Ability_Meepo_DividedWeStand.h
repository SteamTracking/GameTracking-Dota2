class CDOTA_Ability_Meepo_DividedWeStand : public CDOTABaseAbility
{
	bool m_bInventoryUpdating;
	int32 m_nWhichDividedWeStand;
	int32 m_nNumDividedWeStand;
	CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entPrimeDividedWeStand;
	CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entNextDividedWeStand;
	int32 m_iPendingUpgrades;
};
