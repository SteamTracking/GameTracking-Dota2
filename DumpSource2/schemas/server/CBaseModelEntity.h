class CBaseModelEntity : public CBaseEntity
{
	// MNotSaved
	CRenderComponent* m_CRenderComponent;
	CHitboxComponent m_CHitboxComponent;
	CChoreoComponent* m_pChoreoComponent;
	HitGroup_t m_nDestructiblePartInitialStateDestructed0;
	HitGroup_t m_nDestructiblePartInitialStateDestructed1;
	HitGroup_t m_nDestructiblePartInitialStateDestructed2;
	HitGroup_t m_nDestructiblePartInitialStateDestructed3;
	HitGroup_t m_nDestructiblePartInitialStateDestructed4;
	int32 m_nDestructiblePartInitialStateDestructed0_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed1_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed2_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed3_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed4_PartIndex;
	bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces;
	bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces;
	bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces;
	bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces;
	bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces;
	CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent;
	CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged;
	GameTime_t m_flDissolveStartTime;
	CEntityIOOutput m_OnIgnite;
	int32 m_iViewerID;
	int32 m_iTeamVisibilityBitmask;
	RenderMode_t m_nRenderMode;
	bool m_bVisibilityDirtyFlag;
	int16[10] m_iFOWTempViewerID;
	RenderFx_t m_nRenderFX;
	bool m_bAllowFadeInView;
	Color m_clrRender;
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
	bool m_bRenderToCubemaps;
	bool m_bNoInterpolate;
	CCollisionProperty m_Collision;
	CGlowProperty m_Glow;
	float32 m_flGlowBackfaceMult;
	float32 m_fadeMinDist;
	float32 m_fadeMaxDist;
	float32 m_flFadeScale;
	float32 m_flShadowStrength;
	uint8 m_nObjectCulling;
	CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices;
	CNetworkViewOffsetVector m_vecViewOffset;
	// MKV3TransferSaveOpsForField = "GetHitgroupDisableListSaveRestoreOps"
	uint32[1] m_bvDisabledHitGroups;
};
