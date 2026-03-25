// MGetKV3ClassDefaults = {
//	"_class": "CNmParameterizedSelectorNode::CDefinition",
//	"m_nNodeIdx": -1,
//	"m_optionNodeIndices":
//	[
//	],
//	"m_optionWeights":
//	[
//	],
//	"m_parameterNodeIdx": -1,
//	"m_bIgnoreInvalidOptions": false,
//	"m_bHasWeightsSet": false
//}
class CNmParameterizedSelectorNode::CDefinition : public CNmPoseNode::CDefinition
{
	CUtlLeanVectorFixedGrowable< int16, 8 > m_optionNodeIndices;
	CUtlLeanVectorFixedGrowable< uint8, 8 > m_optionWeights;
	int16 m_parameterNodeIdx;
	bool m_bIgnoreInvalidOptions;
	bool m_bHasWeightsSet;
};
