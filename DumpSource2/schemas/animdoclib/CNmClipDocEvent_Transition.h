// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_Transition",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_rule": "AllowTransition",
//	"m_optionalID": ""
//}
class CNmClipDocEvent_Transition : public CNmClipDocEvent
{
	NmTransitionRule_t m_rule;
	CUtlString m_optionalID;
};
