// MGetKV3ClassDefaults = {
//	"generic_data_type": "",
//	"m_unID": 0,
//	"m_sKey": "",
//	"m_eAssociatedEvent": "EVENT_ID_NONE",
//	"m_eProgressionType": "k_eOverworldProgressionType_NodesAndPaths",
//	"m_sNodeUnlockEventAction": "",
//	"m_vGridOffset":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_unGridSize": 64,
//	"m_unMapWidth": 0,
//	"m_unMapHeight": 0,
//	"m_flMinCameraDistance": 0.000000,
//	"m_flMaxCameraDistance": 0.000000,
//	"m_flInnerCameraDistanceThreshold": 0.000000,
//	"m_vMinCameraBounds":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_vMaxCameraBounds":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_sMapVisualsXmlPath": "",
//	"m_vecStartNodeIds":
//	[
//	],
//	"m_unEndNodeID": 0,
//	"m_sVisualNovelName": "",
//	"m_sTokenLocStringPrefix": "",
//	"m_sActNumberLocString": "",
//	"m_sActTitleLocString": "",
//	"m_unPremiumItemDef": 0,
//	"m_unFullCompletionItemDef": 0,
//	"m_unScrapTokenID": 0,
//	"m_unFortuneDuration": 0,
//	"m_vecEventActionTriggers":
//	[
//	],
//	"m_vecEventActionGrantAndClaimPairTriggers":
//	[
//	],
//	"m_vecPathColorRules":
//	[
//	],
//	"m_Theme":
//	{
//		"m_sButtonType": "DOTACrownfallButton",
//		"m_sTokenType": "DOTACrownfallToken",
//		"m_sTokenReceivedPopupLayout": "file://{resources}/layout/battle_pass/crownfall/bp_popup_crownfall_tokens_received.xml",
//		"m_sTokenTraderEncounterLayout": "file://{resources}/layout/battle_pass/crownfall/bp_popup_crownfall_encounter_token_trader.xml",
//		"m_sInventoryPickerLayout": "file://{resources}/layout/ui_overworld_inventory_picker.xml",
//		"m_sTextPrefix": "Crownfall"
//	},
//	"m_vecTokenTypes":
//	[
//	],
//	"m_vecTarotCards":
//	[
//	],
//	"m_vecHeroRewards":
//	[
//	],
//	"m_vecNodes":
//	[
//	],
//	"m_vecPaths":
//	[
//	],
//	"m_vecRooms":
//	[
//	],
//	"m_vecEncounters":
//	[
//	],
//	"m_vecHeroes":
//	[
//	],
//	"m_vecCharacters":
//	[
//	],
//	"m_vecClickables":
//	[
//	],
//	"m_vecRoomGroups":
//	[
//	]
//}
// MVDataRoot
// MVDataSingleton
class CDOTAOverworldDefinition
{
	CUtlString generic_data_type;
	// MPropertyDescription = ""
	OverworldID_t m_unID;
	// MPropertyDescription = ""
	CUtlString m_sKey;
	// MPropertyDescription = "The event related to this overworld. Used for rewards and expiration."
	EEvent m_eAssociatedEvent;
	EOverworldProgressionType m_eProgressionType;
	// MPropertyDescription = "An event action to grant whenever a node is unlocked."
	CUtlString m_sNodeUnlockEventAction;
	Vector2D m_vGridOffset;
	uint32 m_unGridSize;
	uint32 m_unMapWidth;
	uint32 m_unMapHeight;
	// MPropertyDescription = "Minimum camera distance. Lower means more zoom in possible"
	float32 m_flMinCameraDistance;
	// MPropertyDescription = "Maximum camera distance. Higher means more zoom out possible"
	float32 m_flMaxCameraDistance;
	// MPropertyDescription = "The camera distance at which we reveal rooms / train car interior."
	float32 m_flInnerCameraDistanceThreshold;
	// MPropertyDescription = "Minimum camera center position."
	Vector2D m_vMinCameraBounds;
	// MPropertyDescription = "Minimum camera center position."
	Vector2D m_vMaxCameraBounds;
	CUtlString m_sMapVisualsXmlPath;
	// MPropertyDescription = ""
	CUtlVector< OverworldNodeID_t > m_vecStartNodeIds;
	// MPropertyDescription = ""
	OverworldNodeID_t m_unEndNodeID;
	// MPropertyDescription = "Name/key of the Visual Novel associated with this map."
	CUtlString m_sVisualNovelName;
	// MPropertyDescription = "Prefix to combine with tokent names to give their loc strings."
	CUtlString m_sTokenLocStringPrefix;
	// MPropertyDescription = "Act number loc string, e.g. Act I."
	CUtlString m_sActNumberLocString;
	// MPropertyDescription = "Act title loc string, e.g. The Eyrie."
	CUtlString m_sActTitleLocString;
	// MPropertyDescription = ""
	item_definition_index_t m_unPremiumItemDef;
	// MPropertyDescription = ""
	item_definition_index_t m_unFullCompletionItemDef;
	// MPropertyDescription = "ID of the scrap token rewarded for playing matches."
	OverworldTokenID_t m_unScrapTokenID;
	// MPropertyDescription = "How long a fortune lasts for an account in seconds"
	uint32 m_unFortuneDuration;
	CUtlVector< CDOTAEventActionTrigger > m_vecEventActionTriggers;
	CUtlVector< CDOTAEventActionGrantAndClaimPairTrigger > m_vecEventActionGrantAndClaimPairTriggers;
	CUtlVector< CDOTAOverworldPathColorRule > m_vecPathColorRules;
	CDOTAOverworldTheme m_Theme;
	CUtlVector< CDOTAOverworldToken* > m_vecTokenTypes;
	CUtlVector< CDOTAOverworldTarotCard* > m_vecTarotCards;
	CUtlVector< CDOTAOverworldHeroReward* > m_vecHeroRewards;
	CUtlVector< CDOTAOverworldNode* > m_vecNodes;
	CUtlVector< CDOTAOverworldPath* > m_vecPaths;
	CUtlVector< CDOTAOverworldRoom* > m_vecRooms;
	CUtlVector< CDOTAOverworldEncounter* > m_vecEncounters;
	CUtlVector< CDOTAOverworldHero* > m_vecHeroes;
	CUtlVector< CDOTAOverworldCharacter* > m_vecCharacters;
	CUtlVector< CDOTAOverworldClickable* > m_vecClickables;
	CUtlVector< CDOTAOverworldRoomGroup* > m_vecRoomGroups;
};
