// MGetKV3ClassDefaults = {
//	"_class": "CNmIDBasedSelectorNode::CDefinition",
//	"m_nNodeIdx": -1,
//	"m_optionNodeIndices":
//	[
//	],
//	"m_optionIDs":
//	[
//	],
//	"m_nParameterNodeIdx": -1,
//	"m_nFallbackNodeIdx": -1,
//	"m_bIgnoreInvalidOptions": false
//}
class CNmIDBasedSelectorNode::CDefinition : public CNmPoseNode::CDefinition
{
	CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
	CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_optionIDs;
	int16 m_nParameterNodeIdx;
	int16 m_nFallbackNodeIdx;
	bool m_bIgnoreInvalidOptions;
};
