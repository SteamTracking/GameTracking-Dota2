// MVDataRoot
class CDOTAFightingGameActionDefinition
{
	EFightingGameActionID m_nActionID; // = "INVALID_ACTION_DEFINITION"
	CUtlString m_strCustomActionName;
	CUtlString m_pszSequenceName;
	CUtlString m_pszIconFile;
	CUtlString m_pszSwingSound;
	CUtlString m_pszHitSound;
	int32 m_nDuration; // = -1
	AABB_t m_HurtBox;
	AABB_t m_HitBox;
	int32 m_nHitBoxStart; // = -1
	int32 m_nHitBoxDuration; // = -1
	int32 m_nOnHitFrames;
	int32 m_nOnBlockFrames;
	float32 m_flGuardDamage;
	float32 m_flChipDamage;
	float32 m_flHitDamage;
	float32 m_flHealOnDamage;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_healOnDamageParticle;
	int32 m_nDashStart; // = -1
	int32 m_nDashDuration; // = -1
	int32 m_nDamageAmpFrames;
	float32 m_fDamageAmpPercent;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_damageAmpParticle;
	float32 m_flPushbackOnHit;
	float32 m_flPushbackOnBlock;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_projectileParticle;
	float32 m_flProjectileSpeed;
	float32 m_flProjectileRange;
	float32 m_flDashSpeedMultiplier; // = 1
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_installParticle;
	int32 m_nInstallStart;
	int32 m_nInstallFrames; // = -1
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_actionParticle;
	Vector2D m_vActionParticleOffset;
	int32 m_nActionParticleStart; // = -1
	int32 m_nHitStop;
	int32 m_nBlockStop;
	EFightingGameInvulnerabilityFlags m_nInvulnerabilityFlags;
	int32 m_nInvulnerabilityStart; // = -1
	int32 m_nInvulnerabilityDuration; // = -1
	Vector2D m_vCameraShakeScale;
	bool m_bSingleUse;
	bool m_bNoAttackerPushback;
	bool m_bIsSpecialMove;
	CUtlVector< CDOTAFightingGameCancelOptionDefinition > m_vecCancelOptions;
};
