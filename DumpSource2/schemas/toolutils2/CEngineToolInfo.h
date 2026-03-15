// MGetKV3ClassDefaults = {
//	"m_Name": "",
//	"m_OverrideToolShortcutName": "",
//	"m_FriendlyName": "",
//	"m_ToolIcon": "",
//	"m_Library": "",
//	"m_InterfaceName": "",
//	"m_bShowInRevisionSubMenu": false,
//	"m_bIsSecondaryTool": false,
//	"m_bDoNotWarnAboutLargeAssetBatches": false,
//	"m_bIsWorkshopManagerTool": false,
//	"m_bIsWorkshopItemTool": false,
//	"m_bCanHighlightSubassets": false,
//	"m_AssetTypes":
//	[
//	],
//	"m_LimitToMods":
//	[
//	],
//	"m_ExcludeFromMods":
//	[
//	]
//}
class CEngineToolInfo : public CBaseToolInfo
{
	CUtlString m_Library;
	CUtlString m_InterfaceName;
	bool m_bShowInRevisionSubMenu;
	bool m_bIsSecondaryTool;
	bool m_bDoNotWarnAboutLargeAssetBatches;
	bool m_bIsWorkshopManagerTool;
	bool m_bIsWorkshopItemTool;
	bool m_bCanHighlightSubassets;
	CUtlVector< CUtlString > m_AssetTypes;
	CUtlVector< CUtlString > m_LimitToMods;
	CUtlVector< CUtlString > m_ExcludeFromMods;
};
