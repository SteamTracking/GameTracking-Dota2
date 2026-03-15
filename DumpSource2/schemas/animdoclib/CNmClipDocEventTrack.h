// MGetKV3ClassDefaults = {
//	"m_events":
//	[
//	],
//	"m_eventClassName": "",
//	"m_type": "Duration",
//	"m_bIsSyncTrack": false,
//	"m_bIsDisabled": false
//}
class CNmClipDocEventTrack
{
	CUtlVector< CNmClipDocEvent* > m_events;
	CUtlString m_eventClassName;
	CNmClipDocEventTrack::Type_t m_type;
	bool m_bIsSyncTrack;
	bool m_bIsDisabled;
};
