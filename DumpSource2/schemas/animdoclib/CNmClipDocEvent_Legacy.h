// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_Legacy",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_eventClass": "",
//	"m_KV": null
//}
class CNmClipDocEvent_Legacy : public CNmClipDocEvent
{
	// MPropertyAutoRebuildOnChange
	CUtlString m_eventClass;
	// MPropertySuppressField
	KeyValues3 m_KV;
};
