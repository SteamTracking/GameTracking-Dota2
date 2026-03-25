// MGetKV3ClassDefaults = {
//	"m_unID": 0,
//	"m_sDialogueName": "",
//	"m_sEncounterName": "",
//	"m_sRewardEventAction": "",
//	"m_vPos":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_eNodeFlags": "",
//	"m_bSkipGrantingRewardOnUnlock": false,
//	"m_sHiddenWithoutEventAction": "",
//	"m_sJSEvent": "",
//	"m_sCustomClass": "",
//	"m_flUnlockDelay": 0.000000,
//	"m_flRotation": 0.000000,
//	"m_flScalePercentage": 100.000000,
//	"m_vecUnlockMapClasses":
//	[
//	],
//	"m_vecVisitMapClasses":
//	[
//	]
//}
// MVDataRoot
class CDOTAOverworldNode
{
	// MVDataUniqueMonotonicInt = "_editor/next_id_node"
	// MPropertyAttributeEditor = "locked_int()"
	OverworldNodeID_t m_unID;
	// MPropertyDescription = "Name/Key used to look up which Visual Novel dialogue to use."
	CUtlString m_sDialogueName;
	CUtlString m_sEncounterName;
	CUtlString m_sRewardEventAction;
	Vector2D m_vPos;
	EOverworldNodeFlags m_eNodeFlags;
	bool m_bSkipGrantingRewardOnUnlock;
	// MPropertyDescription = "If defined, this node and the path to it are invisible and unreachable to players unless they own a specific event action."
	CUtlString m_sHiddenWithoutEventAction;
	CUtlString m_sJSEvent;
	// MPropertyDescription = "A css class to be applied to the node."
	CUtlString m_sCustomClass;
	float32 m_flUnlockDelay;
	// MPropertyDescription = "Yaw rotation of model preview (if this Node has one)."
	float32 m_flRotation;
	// MPropertyDescription = "Percent scale of model preview (if this Node has one)."
	float32 m_flScalePercentage;
	// MPropertyDescription = "CSS Classes that will be applied to the map when this node is unlocked."
	CUtlVector< CUtlString > m_vecUnlockMapClasses;
	// MPropertyDescription = "CSS Classes that will be applied to the map when this node is being visited, and removed when leaving it."
	CUtlVector< CUtlString > m_vecVisitMapClasses;
};
