// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_Particle",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_relevance": "ClientAndServer",
//	"m_type": "Create",
//	"m_target": "Self",
//	"m_particleSystem": "",
//	"m_bDetachFromOwner": false,
//	"m_bStopImmediately": false,
//	"m_bPlayEndCap": false,
//	"m_attachmentPoint0": "",
//	"m_attachmentType0": "PATTACH_INVALID",
//	"m_attachmentPoint1": "",
//	"m_attachmentType1": "PATTACH_INVALID",
//	"m_config": "",
//	"m_effectForConfig": "",
//	"m_tags": ""
//}
class CNmClipDocEvent_Particle : public CNmClipDocEvent
{
	CNmEventRelevance_t m_relevance;
	CNmParticleEvent::Type_t m_type;
	CNmEventTargetEntity_t m_target;
	// MPropertyStartGroup = "+Particle"
	// MPropertyAttributeEditor = "AssetBrowse( vpcf, *requiredoubleclick )"
	CUtlString m_particleSystem;
	bool m_bDetachFromOwner;
	bool m_bStopImmediately;
	bool m_bPlayEndCap;
	// MPropertyStartGroup = "+Attachment"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_attachmentPoint0;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	ParticleAttachment_t m_attachmentType0;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_attachmentPoint1;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	ParticleAttachment_t m_attachmentType1;
	// MPropertyStartGroup = "+Config"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_config;
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_effectForConfig;
	// MPropertyStartGroup = "+Metadata"
	CUtlString m_tags;
};
