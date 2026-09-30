// MVDataRoot
class SPingWheelMessageDefinition
{
	// MPropertyDescription = "unique integer ID of this ping wheel message"
	// MVDataUniqueMonotonicInt = "_editor/next_ping_wheel_id"
	// MPropertyAttributeEditor = "locked_int()"
	PingWheelMessageID_t nID;
	// MPropertyDescription = "optional ID of associated message, like enemy/friendly wards"
	PingWheelMessageID_t nAssociatedID; // = 4294967295
	// MPropertyDescription = "localization string ID for name of ping"
	CUtlString sLocName;
	// MPropertyDescription = "Particle system of ping effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticle;
	// MPropertyDescription = "Particle system of ping effect when targetting an npc (optional)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticleTarget;
	// MPropertyDescription = "Color of ping effect. Leave default to use pinging player color."
	// MPropertyColorPlusAlpha
	Color color;
	// MPropertyDescription = "Image shown while customizing ping wheel"
	CPanoramaImageName sImage;
	// MPropertyDescription = "Sound played when pinging"
	// MPropertyCustomFGDType = "sound"
	CUtlString sSound;
	// MPropertyDescription = "localization string ID for chat message when pinging"
	CUtlString sChat;
	// MPropertyDescription = "localization string ID for chat message when pinging a target entity"
	CUtlString sChatWithTarget;
	// MPropertyDescription = "Event for tracking expiration. See EEvent enum"
	EEvent eUnlockEvent; // = "EVENT_ID_NONE"
	// MPropertyDescription = "Action of the unlock event which awards this ping wheel"
	uint32 nUnlockEventActionID;
	// MPropertyDescription = "Duration to show a ping on the the minimap."
	float32 m_flMinimapDuration; // = 3
	// MPropertyDescription = "Whether or not to flash the pinged unit's icon."
	bool m_bFlashTargetIcon;
	PingMinimapIconInfo_t m_minimapIconInfo; // = { "m_bAlignBottom": false, "m_bForceBaseIconWhite": false, "m_eDrawCondition": "k_ePingMinimapDrawCondition_Always", "m_flAnimIntroDuration": 0.3, "m_flAnimOutroDuration": 0.5, "m_flAnimStartSize": 10000, "m_flAnimThrobRate": 6, "m_flAnimThrobSize": 300, "m_flSize": 800, "m_nIconID": 0 }
	// MPropertyDescription = "Optional additional layers."
	CUtlVector< PingMinimapIconLayerInfo_t > m_vecAdditionalMinimapLayers;
	PingParticleInfo_t m_particleInfo; // = { "m_bShowDotaPlusBadge": false, "m_flBonusVerticalOffsetFromTargetEntity": 0, "m_flDuration": 3, "m_flRadius": 1, "m_flVerticalOffset": 240 }
	bool m_bRequiresDotaPlus;
	bool m_bIsBindable; // = true
};
