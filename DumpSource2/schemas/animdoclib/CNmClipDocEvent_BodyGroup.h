// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_BodyGroup",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_target": "Self",
//	"bodygroup": "",
//	"value": 0
//}
class CNmClipDocEvent_BodyGroup : public CNmClipDocEvent
{
	CNmEventTargetEntity_t m_target;
	// MPropertyFriendlyName = "Body Group"
	CUtlString bodygroup;
	// MPropertyFriendlyName = "Value"
	int32 value;
};
