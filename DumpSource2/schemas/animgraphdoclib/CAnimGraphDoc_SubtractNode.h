// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SubtractNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_baseInputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_subtractInputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_timingBehavior": "UseChild1",
//	"m_flTimingBlend": 0.500000,
//	"m_footMotionTiming": "Child1",
//	"m_bApplyToFootMotion": true,
//	"m_bResetBase": true,
//	"m_bResetSubtract": true,
//	"m_bApplyChannelsSeparately": true,
//	"m_bUseModelSpace": false
//}
// MPropertyFriendlyName = "Subtract"
class CAnimGraphDoc_SubtractNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_baseInputConnection;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_subtractInputConnection;
	// MPropertyFriendlyName = "Timing Control"
	// MPropertyAutoRebuildOnChange
	BinaryNodeTiming m_timingBehavior;
	// MPropertyFriendlyName = "Timing Blend"
	// MPropertyAttributeRange = "0 1"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTimingBlend;
	// MPropertyFriendlyName = "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming;
	// MPropertyFriendlyName = "Subtract Foot Motion"
	bool m_bApplyToFootMotion;
	// MPropertyFriendlyName = "Reset Base Child"
	bool m_bResetBase;
	// MPropertyFriendlyName = "Reset Subtracted Child"
	bool m_bResetSubtract;
	// MPropertyFriendlyName = "Treat Translation Separately"
	bool m_bApplyChannelsSeparately;
	// MPropertyFriendlyName = "Use Model Space"
	bool m_bUseModelSpace;
};
