// MVDataRoot
class CDOTAOverworldCharacter
{
	// MPropertyDescription = "If set, character will appear behind the specified hero in a traveling party, as long as 1 node meets the conditionals."
	CDOTAOverworldCharacterBase m_appearance; // = { "m_bUse3dPreview": false, "m_nPreviewHeroID": 0, "m_sClassName": "", "m_sImage": "", "m_unFrameTime": 100, "m_unFrameWidth": 0, "m_vOffset": [ 0, 0 ], "m_vSize": [ 0, 0 ] }
	CDOTAOverworldCharacterConditional m_conditions; // = { "m_eConditionFlags": "CompleteNode|ActiveNode", "m_vecNodes": [  ] }
	OverworldHeroID_t m_unHeroPartyID;
	CDOTAOverworldCharacterConditional m_partyConditions; // = { "m_eConditionFlags": "CompleteNode|ActiveNode", "m_vecNodes": [  ] }
};
