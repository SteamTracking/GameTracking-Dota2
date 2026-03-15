// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SequenceBlend2DItem",
//	"m_blendValue":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_bUseCustomDuration": false,
//	"m_flCustomDuration": 0.000000,
//	"m_tagSpans":
//	[
//	],
//	"m_sequenceName": ""
//}
// MPropertyFriendlyName = "Sequence Blend Item"
// MPropertyElementNameFn (UNKNOWN FOR PARSER)
class CAnimGraphDoc_SequenceBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans;
	// MPropertyFriendlyName = "Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_sequenceName;
};
