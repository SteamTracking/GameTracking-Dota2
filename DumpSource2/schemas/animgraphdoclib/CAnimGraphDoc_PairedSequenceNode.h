// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_PairedSequenceNode",
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
//	"m_sPairedRole": "",
//	"m_previewSequenceName": "",
//	"m_flPlaybackSpeed": 1.000000,
//	"m_bLoop": false
//}
// MPropertyFriendlyName = "Paired Animation Clip"
class CAnimGraphDoc_PairedSequenceNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Paired Role"
	CGlobalSymbol m_sPairedRole;
	// MPropertyFriendlyName = "Preview Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_previewSequenceName;
	// MPropertyFriendlyName = "Playback Speed"
	float32 m_flPlaybackSpeed;
	// MPropertyFriendlyName = "Loop"
	bool m_bLoop;
};
