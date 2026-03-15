// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocSyncEventIndexConditionNode",
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
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_triggerMode": "ExactlyAtEventIndex",
//	"m_nSyncEventIdx": -1
//}
class CNmGraphDocSyncEventIndexConditionNode : public CNmGraphDocFlowNode
{
	CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode;
	int32 m_nSyncEventIdx;
};
