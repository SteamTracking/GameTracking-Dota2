// MVDataRoot
class CSurvivorsHeroDefinition
{
	SurvivorsHeroID_t m_unHeroID;
	HeroID_t m_nDOTAHeroID;
	float32 m_flBaseHealth; // = 100
	float32 m_flBaseSpeed; // = 100
	float32 m_flBasePickupRadius; // = 100
	float32 m_flBaseDashSpeed; // = 1300
	float32 m_flBaseDashDuration; // = 0.25
	float32 m_flBaseDashCooldown; // = 1
	int32 m_nBaseNumDashes; // = 1
	float32 m_flMass; // = 20000
	float32 m_flCollisionRadius; // = 20
	float32 m_flCollisionHeight; // = 100
	float32 m_flTriggerCollisionRadiusPadding; // = 10
	CUtlString m_pszPlayerHitSoundEvent;
	CUtlString m_sLocDisplayName;
	CUtlVector< item_definition_index_t > m_vecEconItems;
	style_index_t m_unStyleIndex; // = 255
	CUtlVector< CSurvivorsAttributeValue > m_vecBaseAttributes;
	CUtlVector< SurvivorsPowerUpID_t > m_vecStartingPowerUps;
	CUtlVector< SurvivorsPowerUpID_t > m_vecInnatePowerUps;
};
