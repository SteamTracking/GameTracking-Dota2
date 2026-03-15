// MGetKV3ClassDefaults = {
//	"m_ePackingMode": "PCKM_FLAT",
//	"m_NumMips": 2,
//	"m_bHasDecalParams": false,
//	"m_sLayoutOwnerSheet": "",
//	"m_Sequences":
//	{
//	},
//	"generic_data_type": "CTextureSheetDoc"
//}
// MVDataRoot
// MVDataSingleton
// MVDataPreviewWidget (UNKNOWN FOR PARSER)
// MVDataFileExtension = "mks"
class CTextureSheetDoc
{
	PackingMode_t m_ePackingMode;
	int32 m_NumMips;
	// MPropertySuppressExpr = "m_sLayoutOwnerSheet != "" "
	bool m_bHasDecalParams;
	// MPropertyAttributeEditor = "AssetBrowse( mks )"
	CUtlString m_sLayoutOwnerSheet;
	// MVDataPromoteField (UNKNOWN FOR PARSER)
	CUtlStringMap< CTextureSheetDoc_Sequence* > m_Sequences;
};
