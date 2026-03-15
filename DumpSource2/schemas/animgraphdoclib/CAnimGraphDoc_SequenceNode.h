// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SequenceNode",
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
//	"m_tagSpans":
//	[
//	],
//	"m_paramSpans":
//	[
//	],
//	"m_sequenceName": "",
//	"m_playbackSpeed": 1.000000,
//	"m_bLoop": false
//}
// MPropertyFriendlyName = "Animation Clip"
class CAnimGraphDoc_SequenceNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans;
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans;
	// MPropertyFriendlyName = "Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_sequenceName;
	// MPropertyFriendlyName = "Playback Speed"
	float32 m_playbackSpeed;
	// MPropertyFriendlyName = "Loop"
	bool m_bLoop;
};
