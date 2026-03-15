// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocAnimationPoseNode::CData",
//	"m_clip": "",
//	"m_variationTimeValue": -1.000000
//}
class CNmGraphDocAnimationPoseNode::CData : public CNmGraphDocVariationDataNode::CData
{
	// MPropertyAttributeEditor = "AssetBrowse( vnmclip, *requiredoubleclick )"
	CUtlString m_clip;
	float32 m_variationTimeValue;
};
