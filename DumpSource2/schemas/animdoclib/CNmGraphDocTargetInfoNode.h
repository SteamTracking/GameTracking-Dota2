// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTargetInfoNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph": null,
//	"m_pSecondaryGraph": null,
//	"m_inputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Target",
//			"m_type": "Target",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_infoType": "Distance",
//	"m_bIsWorldSpaceTarget": true
//}
class CNmGraphDocTargetInfoNode : public CNmGraphDocFlowNode
{
	CNmTargetInfoNode::Info_t m_infoType;
	bool m_bIsWorldSpaceTarget;
};
