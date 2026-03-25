// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_EntityAttribute",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_target": "Self",
//	"m_attributeName": "",
//	"m_nValueType": "EVENT_ENTITY_ATTR_TYPE_INT",
//	"m_nIntValue": 0,
//	"m_FloatValue":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	}
//}
class CNmClipDocEvent_EntityAttribute : public CNmClipDocEvent
{
	CNmEventTargetEntity_t m_target;
	CUtlString m_attributeName;
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName = "Type"
	CNmClipDocEvent_EntityAttribute_Type_t m_nValueType;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	int32 m_nIntValue;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CPiecewiseCurve m_FloatValue;
};
