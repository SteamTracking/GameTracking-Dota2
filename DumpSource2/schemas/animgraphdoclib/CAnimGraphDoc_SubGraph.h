// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SubGraph",
//	"m_nodeManager":
//	{
//		"_class": "CAnimGraphDoc_NodeManager",
//		"m_nodes":
//		[
//		]
//	},
//	"m_componentManager":
//	{
//		"_class": "CAnimGraphDoc_ComponentManager",
//		"m_components":
//		[
//		]
//	},
//	"m_localParameters":
//	[
//	],
//	"m_localTags":
//	[
//	],
//	"m_referencedParamGroups":
//	[
//	],
//	"m_referencedTagGroups":
//	[
//	]
//}
class CAnimGraphDoc_SubGraph
{
	CAnimGraphDoc_NodeManager m_nodeManager;
	CAnimGraphDoc_ComponentManager m_componentManager;
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters;
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags;
	CUtlVector< CUtlString > m_referencedParamGroups;
	CUtlVector< CUtlString > m_referencedTagGroups;
};
