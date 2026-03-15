// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocClipNode::CData",
//	"m_clip": "",
//	"m_flSpeedMultiplier": 1.000000,
//	"m_nStartSyncEventOffset": 0
//}
class CNmGraphDocClipNode::CData : public CNmGraphDocVariationDataNode::CData
{
	// MPropertyAttributeEditor = "AssetBrowse( vnmclip, *requiredoubleclick )"
	CUtlString m_clip;
	// MPropertyAttributeRange = "0.01 5.0"
	float32 m_flSpeedMultiplier;
	int32 m_nStartSyncEventOffset;
};
