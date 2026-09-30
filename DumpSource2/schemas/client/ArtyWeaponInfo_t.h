// MVDataRoot
class ArtyWeaponInfo_t
{
	ArtyWeaponID_t m_unID;
	CUtlString m_sWeaponLocName;
	CUtlString m_sWeaponLocDesc;
	CUtlString m_sWeaponSwapSound;
	CUtlString m_sWeaponFireSound;
	CPanoramaImageName m_sWeaponImage;
	bool m_bIsPlayerWeapon;
	// MPropertyCustomFGDType = "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
	CUtlString m_strGraphicInfoName;
	GameActivity_t m_weaponAttackActivity; // = "ACT_DOTA_ATTACK"
	float32 m_flShotCreationTime;
	float32 m_flDamage; // = 1
	float32 m_flHitRadius; // = 8
	float32 m_flTerrainCarveRadius; // = 40
	float32 m_flDamageRadius;
	float32 m_flLockedAngle; // = -1
	float32 m_flLockedPower; // = -1
	float32 m_flReloadTime; // = 2
	int32 m_nSplitCount;
	float32 m_flSplitTime; // = -1
	float32 m_flSplitRepeatTime; // = -1
	float32 m_flSplitDispersion;
	bool m_bSplitAtTop;
	bool m_bZeroXOnSplit;
	bool m_bSplitRepeats;
	CUtlString m_szSplitWeapon;
	float32 m_flMaxSpeed; // = 1000
	float32 m_flDragMult; // = 1
	float32 m_flWindMult; // = 1
	bool m_bIsRay;
	float32 m_flRangeMult; // = 1
	int32 m_nInitialShotCount; // = 1
	float32 m_nInitialShotAngleDispersionPer;
	float32 m_flManaCost;
	bool m_bDisabled;
	bool m_bBounces;
	bool m_bBounceOffTarget; // = true
	float32 m_flFuseTime;
	float32 m_flBounceDrag; // = 0.7
	int32 m_nMaxReloads; // = -1
	float32 m_flGravityMult; // = 1
	bool m_bProximityFuse;
	bool m_bUseHighArc; // = true
	bool m_bCollides; // = true
	bool m_bDirectAimAtTarget;
	int32 m_nWeaponPoints;
	int32 m_nRayDigTimes;
	bool m_bNoShootingWhileInAir;
	bool m_bListenForKeypress;
	Vector2D m_vVelocityMultOnKeypress; // = [ 1, 1 ]
	Vector2D m_vVelocityOffsetOnKeypress;
	bool m_bShowTrajectory;
	Vector2D m_vVelocityMultOnExplode; // = [ 1, 1 ]
	Vector2D m_vVelocityOffsetOnExplode;
	int32 m_nExplodeTimes; // = 1
	float32 m_flRadiusChangePerExplode;
};
