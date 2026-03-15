// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_Sound",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_relevance": "ClientAndServer",
//	"m_bContinuePlayingSoundAtDurationEnd": false,
//	"m_flDurationInterruptionThreshold": 0.900000,
//	"m_name": "",
//	"m_position": "None",
//	"m_attachmentName": "",
//	"m_tags": ""
//}
class CNmClipDocEvent_Sound : public CNmClipDocEvent
{
	CNmEventRelevance_t m_relevance;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bContinuePlayingSoundAtDurationEnd;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flDurationInterruptionThreshold;
	// MPropertyStartGroup = "+Sound"
	// MPropertyAttributeEditor = "SoundPicker()"
	CUtlString m_name;
	// MPropertyStartGroup = "+Position"
	CNmSoundEvent::Position_t m_position;
	CUtlString m_attachmentName;
	// MPropertyStartGroup = "+Metadata"
	CUtlString m_tags;
};
