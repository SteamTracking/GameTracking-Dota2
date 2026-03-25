// MGetKV3ClassDefaults = {
//	"_class": "CNmEntityAttributeEventBase",
//	"m_flStartTime":
//	{
//		"m_flValue": 0.000000
//	},
//	"m_flDuration":
//	{
//		"m_flValue": 0.000000
//	},
//	"m_syncID": "",
//	"m_target": "Self",
//	"m_attributeName": ""
//}
class CNmEntityAttributeEventBase : public CNmEvent
{
	CNmEventTargetEntity_t m_target;
	CUtlString m_attributeName;
};
