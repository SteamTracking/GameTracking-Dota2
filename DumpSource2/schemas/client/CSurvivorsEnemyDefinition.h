// MVDataRoot
// MHasKV3TransferPolymorphicClassname
class CSurvivorsEnemyDefinition
{
	SurvivorsEnemyID_t m_unEnemyID;
	CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > > m_vecModelNames;
	CUtlString m_sStatsName;
	CUtlString m_sDisplayName;
	CPanoramaImageName m_sImageThumbnail;
	bool m_bUseHeroModel;
	HeroID_t m_nDOTAHeroID;
	CUtlVector< item_definition_index_t > m_vecEconItems;
	style_index_t m_unStyleIndex; // = 255
	CUtlString m_sSkinName;
	CUtlVector< CUtlString > m_sSkinNames;
	float32 m_flTouchDamage;
	bool m_bDieOnTouch;
	CUtlVector< CSurvivorsEnemyDefinition::Attack > m_vecAttacks;
	CUtlVector< CSurvivorsEnemyDefinition::PickupChance > m_vecPickupChances;
	CUtlVector< CSurvivorsEnemyDefinition::PickupChance > m_vecLootTable;
	CSurvivorsLootTable m_fullLootTable;
	float32 m_flMaxHealth; // = 10
	float32 m_flMaxHealthPerPlayerLevel;
	float32 m_flMoveSpeed; // = 50
	float32 m_flModelScale; // = 1
	float32 m_flMaxModelScaleVariance; // = 0.05
	float32 m_flCollisionRadius; // = 30
	bool m_bHasSolidBody;
	bool m_bUndespawnable;
	float32 m_flOverrideDespawnRadiusBuffer; // = -1
	bool m_bHasDeathAnimation; // = true
	bool m_bDissolveOnDeath; // = true
	float32 m_flDeathDuration; // = 0.5
	float32 m_flDeathEffect_DissolveEdgeWidth; // = 0.05
	float32 m_flDeathEffect_DissolveScale; // = 200
	Vector m_flDeathEffect_DissolveColor; // = [ 0.1, 0, 0 ]
	bool m_bRandomFacing; // = true
	bool m_bPlayerFacing;
	Vector2D m_vFixedFacing;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDeathEffectParticle;
	float32 m_flMoveAnimPlaybackRate; // = 1
	float32 m_flIdleAnimPlaybackRate; // = 1
	float32 m_flTurnRate; // = 75
	float32 m_flSinMovementAngle; // = 90
	float32 m_flSinMovementPeriodMultiplier; // = 1
	float32 m_flMass; // = 1
	float32 m_flKnockbackResistance;
	float32 m_flStatusResistance;
	bool m_bIsElite;
	bool m_bIsMiniboss;
	bool m_bIsDestructible;
	bool m_bHasGlowOutline;
	bool m_bOverrideGlowColor;
	Color m_cOverriddenGlowColor;
	bool m_bShowHealthBar;
	bool m_bCenterRooted;
	bool m_bRotates;
	bool m_bRandomizeSinTurnTimerOnSpawn; // = true
	bool m_bInvulnerable;
	bool m_bPlayerFriendly;
	int32 m_nSplitOnDeathNumUnits; // = -1
	SurvivorsEnemyID_t m_unSplitOnDeathEnemyID;
	float32 m_flSplitOnDeathKnockbackDistance; // = 50
	ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // = "ENEMY_MOVEMENT_BEHAVIOR_INVALID"
	ESurvivorsEnemyMovementCapability m_eMovementCapability; // = "ENEMY_MOVEMENT_CAPABILITY_INVALID"
	GameActivity_t m_activityIdle; // = "ACT_DOTA_IDLE"
	GameActivity_t m_activityMove; // = "ACT_DOTA_RUN"
	GameActivity_t m_activityDie; // = "ACT_DOTA_DISABLED"
	GameActivity_t m_activityDisabled; // = "ACT_DOTA_DISABLED"
	bool m_bPlayDeathSound;
	ESurvivorsEnemySeparationLayer m_eSeparationLayer; // = "SMALL"
};
