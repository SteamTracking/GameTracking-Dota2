// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_BoneMaskNode",
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
//	"m_weightListName": "",
//	"m_inputConnection1":
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
//	"m_inputConnection2":
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
//	"m_blendSpace": "BlendSpace_Parent",
//	"m_bUseBlendScale": false,
//	"m_blendValueSource": "Parameter",
//	"m_blendParameterName": "",
//	"m_blendParameter":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_timingBehavior": "UseChild2",
//	"m_flTimingBlend": 0.500000,
//	"m_flRootMotionBlend": 0.000000,
//	"m_footMotionTiming": "Child1",
//	"m_bResetChild1": true,
//	"m_bResetChild2": true
//}
// MPropertyFriendlyName = "Bone Mask"
class CAnimGraphDoc_BoneMaskNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Bone Mask"
	// MPropertyAttributeChoiceName = "BoneMask"
	CUtlString m_weightListName;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection1;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection2;
	// MPropertyFriendlyName = "Blend Space"
	BoneMaskBlendSpace m_blendSpace;
	// MPropertyFriendlyName = "Use Blend Source"
	// MPropertyAutoRebuildOnChange
	bool m_bUseBlendScale;
	// MPropertyFriendlyName = "Blend Source"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_blendValueSource;
	// MPropertySuppressField
	CUtlString m_blendParameterName;
	// MPropertyFriendlyName = "Blend Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_blendParameter;
	// MPropertyFriendlyName = "Timing Control"
	// MPropertyAutoRebuildOnChange
	BinaryNodeTiming m_timingBehavior;
	// MPropertyFriendlyName = "Timing Blend"
	// MPropertyAttributeRange = "0 1"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTimingBlend;
	// MPropertyFriendlyName = "Root Motion Blend"
	// MPropertyAttributeRange = "0 1"
	float32 m_flRootMotionBlend;
	// MPropertyFriendlyName = "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming;
	// MPropertyFriendlyName = "Reset Child1"
	bool m_bResetChild1;
	// MPropertyFriendlyName = "Reset Child2"
	bool m_bResetChild2;
};
