// MVDataRoot
class CDOTAOverworldFortuneTellerStoryNode
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_fortune_teller_story_node"
	// MPropertyAttributeEditor = "locked_int()"
	OverworldFortuneTellerStoryNodeID_t m_unID;
	// MPropertyDescription = "Number of fortunes that must be requested before this node unlocks."
	int32 m_nFortuneRequestCount;
	// MPropertyDescription = "Name/key of the Visual Novel dialogue to play when this node is activated."
	CUtlString m_sDialogueName;
	// MPropertyDescription = "Event action that grants the reward when this node is claimed."
	CUtlString m_sRewardEventAction;
};
