// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_State",
//	"m_transitions":
//	[
//	],
//	"m_actions":
//	[
//	],
//	"m_name": "Unnamed",
//	"m_sComment": "",
//	"m_stateID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_bIsStartState": false,
//	"m_bIsEndtState": false,
//	"m_bIsInputToGraph": true,
//	"m_bIsPassthrough": false,
//	"m_bIsPassthroughRootMotion": false,
//	"m_bPreEvaluatePassthroughTransitionPath": false
//}
// MPropertyFriendlyName = "Animation State"
class CAnimGraphDoc_State
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_StateTransition > > m_transitions;
	// MPropertySuppressField
	CUtlVector< CStateAction > m_actions;
	// MPropertyFriendlyName = "Name"
	// MPropertySortPriority = 100
	CUtlString m_name;
	// MPropertyFriendlyName = "Comment"
	// MPropertyAttributeEditor = "TextBlock()"
	// MPropertySortPriority = -100
	CUtlString m_sComment;
	// MPropertySuppressField
	AnimStateID m_stateID;
	// MPropertySuppressField
	Vector2D m_position;
	// MPropertyFriendlyName = "Start State"
	bool m_bIsStartState;
	// MPropertyFriendlyName = "End State"
	bool m_bIsEndtState;
	// MPropertyFriendlyName = "Show Input To Graph"
	bool m_bIsInputToGraph;
	// MPropertyFriendlyName = "Passthrough"
	bool m_bIsPassthrough;
	// MPropertyFriendlyName = "Passthrough Root Motion"
	bool m_bIsPassthroughRootMotion;
	// MPropertyFriendlyName = "Pre Evaluate Passthrough Transition Path"
	bool m_bPreEvaluatePassthroughTransitionPath;
};
