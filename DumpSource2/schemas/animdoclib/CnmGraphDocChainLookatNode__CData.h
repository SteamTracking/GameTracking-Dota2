// MGetKV3ClassDefaults = {
//	"_class": "CnmGraphDocChainLookatNode::CData",
//	"m_chainEndBoneName": "",
//	"m_chainForwardDir":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_nChainLength": 2,
//	"m_flBlendTimeSeconds": 0.000000
//}
class CnmGraphDocChainLookatNode::CData : public CNmGraphDocVariationDataNode::CData
{
	CUtlString m_chainEndBoneName;
	Vector m_chainForwardDir;
	uint8 m_nChainLength;
	float32 m_flBlendTimeSeconds;
};
