// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_Graph",
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
//	],
//	"m_pSettingsManager":
//	{
//		"_class": "CAnimGraphSettingsManager",
//		"m_settingsGroups":
//		[
//			{
//				"_class": "CAnimGraphNetworkSettings",
//				"m_bNetworkingEnabled": true
//			}
//		]
//	},
//	"m_clipDataManager":
//	{
//		"_class": "CAnimGraphDoc_ClipDataManager",
//		"m_itemTable":
//		{
//		}
//	},
//	"m_modelName": "",
//	"m_previewModelName": ""
//}
class CAnimGraphDoc_Graph : public CAnimGraphDoc_SubGraph
{
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager;
	CAnimGraphDoc_ClipDataManager m_clipDataManager;
	CUtlString m_modelName;
	CUtlString m_previewModelName;
};
