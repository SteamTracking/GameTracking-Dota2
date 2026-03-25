// MGetKV3ClassDefaults = {
//	"_class": "CNmBlend2DNode::CDefinition",
//	"m_nNodeIdx": -1,
//	"m_sourceNodeIndices":
//	[
//	],
//	"m_values":
//	[
//	],
//	"m_indices":
//	[
//	],
//	"m_hullIndices":
//	[
//	],
//	"m_nInputParameterNodeIdx0": -1,
//	"m_nInputParameterNodeIdx1": -1,
//	"m_bAllowLooping": true
//}
class CNmBlend2DNode::CDefinition : public CNmPoseNode::CDefinition
{
	CUtlLeanVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
	CUtlLeanVectorFixedGrowable< Vector2D, 10 > m_values;
	CUtlLeanVectorFixedGrowable< uint8, 30 > m_indices;
	CUtlLeanVectorFixedGrowable< uint8, 10 > m_hullIndices;
	int16 m_nInputParameterNodeIdx0;
	int16 m_nInputParameterNodeIdx1;
	bool m_bAllowLooping;
};
