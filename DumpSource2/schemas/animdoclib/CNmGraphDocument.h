// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocument",
//	"m_nVersion": 0,
//	"m_pRootGraph": null,
//	"m_variationHierarchy":
//	{
//		"m_variations":
//		[
//			{
//				"m_ID": <HIDDEN FOR DIFF>,
//				"m_parentID": "",
//				"m_skeleton": "",
//				"m_pUserData": null
//			}
//		]
//	},
//	"m_debugParameterSets":
//	[
//	]
//}
class CNmGraphDocument : public CNmAnimDocument
{
	CNmGraphDocFlowGraph* m_pRootGraph;
	CNmVariationHierarchy m_variationHierarchy;
	CUtlLeanVector< CNmGraphDocument::DebugParameterSet_t > m_debugParameterSets;
};
