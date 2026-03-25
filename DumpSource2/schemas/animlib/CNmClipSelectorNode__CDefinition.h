// MGetKV3ClassDefaults = {
//	"_class": "CNmClipSelectorNode::CDefinition",
//	"m_nNodeIdx": -1,
//	"m_optionNodeIndices":
//	[
//	],
//	"m_conditionNodeIndices":
//	[
//	]
//}
class CNmClipSelectorNode::CDefinition : public CNmClipReferenceNode::CDefinition
{
	CUtlLeanVectorFixedGrowable< int16, 8 > m_optionNodeIndices;
	CUtlLeanVectorFixedGrowable< int16, 8 > m_conditionNodeIndices;
};
