// MGetKV3ClassDefaults = {
//	"m_AssetType": "",
//	"m_RequireSearchableIntKey": "",
//	"m_RequireSearchableIntValue": -1,
//	"m_bOnlyWarnIfGameFilePresent": false,
//	"m_bOnlyWarnIfContentFilePresent": false,
//	"m_bOnlyWarnAddons": false,
//	"m_ExcludeAddonNames":
//	[
//	],
//	"m_FixDescription": "",
//	"m_FixType": "NONE"
//}
class CAssetWarningCheck
{
	CUtlString m_AssetType;
	CBufferString m_RequireSearchableIntKey;
	int32 m_RequireSearchableIntValue;
	bool m_bOnlyWarnIfGameFilePresent;
	bool m_bOnlyWarnIfContentFilePresent;
	bool m_bOnlyWarnAddons;
	CUtlVector< CUtlString > m_ExcludeAddonNames;
	CUtlString m_FixDescription;
	AssetWarningFixType_t m_FixType;
};
