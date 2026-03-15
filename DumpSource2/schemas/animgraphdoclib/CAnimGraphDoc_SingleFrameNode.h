// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SingleFrameNode",
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
//	"m_sequenceName": "",
//	"m_eFrameSelection": "SpecificFrame",
//	"m_nFrameIndex": 0,
//	"m_actions":
//	[
//	]
//}
// MPropertyFriendlyName = "Single Frame"
class CAnimGraphDoc_SingleFrameNode : public CAnimGraphDoc_Node
{
	// MPropertyFriendlyName = "Sequence"
	// MPropertyAttributeChoiceName = "Sequence"
	CUtlString m_sequenceName;
	// MPropertyFriendlyName = "Frame Selection"
	// MPropertyAutoRebuildOnChange
	SingleFrameSelection m_eFrameSelection;
	// MPropertyFriendlyName = "Frame Index"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	int32 m_nFrameIndex;
	CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions;
};
