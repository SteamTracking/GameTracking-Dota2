// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_GraphMotionItem",
//	"m_paramManager":
//	{
//		"_class": "CAnimGraphDoc_MotionParameterManager",
//		"m_params":
//		[
//		]
//	},
//	"m_blockSpans":
//	[
//	],
//	"m_tagSpans":
//	[
//	],
//	"m_paramSpans":
//	[
//	],
//	"m_bLoop": false,
//	"m_name": "New Graph",
//	"m_nodeManager":
//	{
//		"_class": "CAnimGraphDoc_MotionNodeManager",
//		"m_nodes":
//		[
//		]
//	}
//}
// MPropertyFriendlyName = "Motion Graph"
class CAnimGraphDoc_GraphMotionItem : public CAnimGraphDoc_MotionItem
{
	// MPropertyFriendlyName = "Name"
	CUtlString m_name;
	// MPropertySuppressField
	CAnimGraphDoc_MotionNodeManager m_nodeManager;
};
