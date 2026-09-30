// MVDataRoot
class CDOTAOverworldTarotCard
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_tarot_card"
	// MPropertyAttributeEditor = "locked_int()"
	OverworldTarotCardID_t m_unID;
	// MPropertyDescription = ""
	CUtlString m_sName;
	// MPropertyDescription = ""
	bool m_bIsCardBack;
	// MPropertyDescription = ""
	EOverworldFortuneReward m_eFortuneReward; // = "k_eOverworldFortuneReward_Invalid"
	// MPropertyDescription = ""
	EOverworldFortuneRequirement m_eFortuneRequirement; // = "k_eOverworldFortuneRequirement_Invalid"
	// MPropertyDescription = ""
	EOverworldFortuneModifier m_eFortuneModifier; // = "k_eOverworldFortuneModifier_Invalid"
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition1;
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition2;
	// MPropertyDescription = ""
	CUtlString m_sFortunePosition3;
	CUtlString m_sSoundEventName;
	CUtlVector< CUtlString > m_vecSoundEventOptions;
	// MPropertyDescription = ""
	uint32 m_unUnlockReward;
};
