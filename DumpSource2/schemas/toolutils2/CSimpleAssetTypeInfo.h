// MGetKV3ClassDefaults = {
//	"_class": "CSimpleAssetTypeInfo",
//	"m_FriendlyName": "",
//	"m_Ext": "",
//	"m_IconLg": "game:tools/images/assettypes/generic_lg.png",
//	"m_IconSm": "game:tools/images/assettypes/generic_sm.png",
//	"m_SuppressSubstrings":
//	[
//	],
//	"m_AdditionalExtensions":
//	[
//	],
//	"m_EngineCommands":
//	[
//	],
//	"m_LimitToMods":
//	[
//	],
//	"m_ExcludeFromMods":
//	[
//	],
//	"m_HideForRetailMods":
//	[
//	],
//	"m_PreviewThumbnailOverlayIcon": "",
//	"m_bHideTypeByDefault": false,
//	"m_bCannotBeShown": false,
//	"m_bIsNontrivialChildAssetType": false,
//	"m_bSuppressFullFingerprintCalculation": false,
//	"m_bIgnoreCompiledState": false,
//	"m_bContentFileIsText": false,
//	"m_bPrefersLivePreview": false,
//	"m_bPresentInGameTree": false,
//	"m_bShouldCompileErrorFallbackToDisk": false,
//	"m_bUnrecognizedReferencesAreErrors": false,
//	"m_nAssetTypeVersion": 0,
//	"m_Test_InjectSearchable": ""
//}
class CSimpleAssetTypeInfo
{
	CUtlString m_FriendlyName;
	CUtlString m_Ext;
	CUtlString m_IconLg;
	CUtlString m_IconSm;
	CUtlVector< CUtlString > m_SuppressSubstrings;
	CUtlVector< CUtlString > m_AdditionalExtensions;
	CUtlVector< AssetEngineCommand_t > m_EngineCommands;
	CUtlVector< CUtlString > m_LimitToMods;
	CUtlVector< CUtlString > m_ExcludeFromMods;
	CUtlVector< CUtlString > m_HideForRetailMods;
	CUtlString m_PreviewThumbnailOverlayIcon;
	bool m_bHideTypeByDefault;
	bool m_bCannotBeShown;
	bool m_bIsNontrivialChildAssetType;
	bool m_bSuppressFullFingerprintCalculation;
	bool m_bIgnoreCompiledState;
	bool m_bContentFileIsText;
	bool m_bPrefersLivePreview;
	bool m_bPresentInGameTree;
	bool m_bShouldCompileErrorFallbackToDisk;
	bool m_bUnrecognizedReferencesAreErrors;
	int32 m_nAssetTypeVersion;
	CUtlString m_Test_InjectSearchable;
};
