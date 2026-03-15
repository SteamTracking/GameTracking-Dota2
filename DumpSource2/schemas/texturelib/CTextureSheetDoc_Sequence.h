// MGetKV3ClassDefaults = {
//	"m_ChannelMode": "RGBA",
//	"m_LoopMode": "CLAMP",
//	"m_AlphaCropMode": "NONE",
//	"m_DecalParams":
//	{
//		"m_flScale": 1.000000,
//		"m_flDepth": 4.000000,
//		"m_flScaleVariation": 0.250000,
//		"m_flStartFadeTime": 10.000000,
//		"m_flFadeDuration": 3.000000,
//		"m_flAnimationScale": 1.000000,
//		"m_flAnimationStartTime": 0.000000,
//		"m_flAlignWithGravityFactor": 0.000000,
//		"m_nDecalRtEncoding": "kDecalInvalid"
//	},
//	"m_Frames":
//	[
//	]
//}
class CTextureSheetDoc_Sequence
{
	// MPropertyAutoRebuildOnChange
	SequenceChannelMode_t m_ChannelMode;
	SequenceLoopMode_t m_LoopMode;
	SequenceAlphaCropMode_t m_AlphaCropMode;
	// MPropertySuppressExpr = "!__SheetFileHasDecalParams"
	CTextureSheetDoc_SequenceDecalParams m_DecalParams;
	// MPropertyAutoExpandSelf
	CUtlVector< CTextureSheetDoc_Frame > m_Frames;
};
