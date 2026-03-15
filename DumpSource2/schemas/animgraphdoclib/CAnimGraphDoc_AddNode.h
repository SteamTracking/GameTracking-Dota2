// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_AddNode",
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
//	"m_baseInput":
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
//	"m_additiveInput":
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
//	"m_timingBehavior": "UseChild2",
//	"m_flTimingBlend": 0.500000,
//	"m_footMotionTiming": "Child1",
//	"m_bApplyToFootMotion": true,
//	"m_bResetBase": true,
//	"m_bResetAdditive": true,
//	"m_bApplyChannelsSeparately": true,
//	"m_bUseModelSpace": false,
//	"m_bApplyScale": false
//}
// MPropertyFriendlyName = "Add"
class CAnimGraphDoc_AddNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_baseInput;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_additiveInput;
	// MPropertyFriendlyName = "Timing Control"
	// MPropertyAutoRebuildOnChange
	BinaryNodeTiming m_timingBehavior;
	// MPropertyFriendlyName = "Timing Blend"
	// MPropertyAttributeRange = "0 1"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTimingBlend;
	// MPropertyFriendlyName = "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming;
	// MPropertyFriendlyName = "Add Foot Motion"
	bool m_bApplyToFootMotion;
	// MPropertyFriendlyName = "Reset Base Child"
	bool m_bResetBase;
	// MPropertyFriendlyName = "Reset Additive Child"
	bool m_bResetAdditive;
	// MPropertyFriendlyName = "Treat Translation Separately"
	bool m_bApplyChannelsSeparately;
	// MPropertyFriendlyName = "Use Model Space"
	bool m_bUseModelSpace;
	// MPropertyFriendlyName = "Apply Scale"
	// MPropertyDescription = "Apply Scale Channels During Add.  Requires Treat Translation Separately."
	bool m_bApplyScale;
};
