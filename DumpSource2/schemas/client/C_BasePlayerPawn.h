class C_BasePlayerPawn : public C_BaseCombatCharacter
{
	CPlayer_WeaponServices* m_pWeaponServices;
	CPlayer_ItemServices* m_pItemServices;
	CPlayer_AutoaimServices* m_pAutoaimServices;
	CPlayer_ObserverServices* m_pObserverServices;
	CPlayer_WaterServices* m_pWaterServices;
	CPlayer_UseServices* m_pUseServices;
	CPlayer_FlashlightServices* m_pFlashlightServices;
	CPlayer_CameraServices* m_pCameraServices;
	CPlayer_MovementServices* m_pMovementServices;
	QAngle v_angle;
	QAngle v_anglePrevious;
	uint32 m_iHideHUD;
	sky3dparams_t m_skybox3d;
	GameTime_t m_flDeathTime;
	// MNotSaved
	Vector m_vecPredictionError;
	// MNotSaved
	GameTime_t m_flPredictionErrorTime;
	// MNotSaved
	Vector m_vecLastCameraSetupLocalOrigin;
	// MNotSaved
	GameTime_t m_flLastCameraSetupTime;
	// MNotSaved
	float32 m_flFOVSensitivityAdjust;
	// MNotSaved
	float32 m_flMouseSensitivity;
	// MNotSaved
	Vector m_vOldOrigin;
	// MNotSaved
	float32 m_flOldSimulationTime;
	// MNotSaved
	int32 m_nLastExecutedCommandNumber;
	// MNotSaved
	int32 m_nLastExecutedCommandTick;
	CHandle< CBasePlayerController > m_hController;
	CHandle< CBasePlayerController > m_hDefaultController;
	// MNotSaved
	bool m_bIsSwappingToPredictableController;
};
