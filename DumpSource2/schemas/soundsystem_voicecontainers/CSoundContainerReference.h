// MGetKV3ClassDefaults = {
//	"m_namespace": "",
//	"m_bUseReference": true,
//	"m_sound": "",
//	"m_pSound": null
//}
// MPropertyFriendlyName = "Sound"
// MPropertyDescription = "Reference to a vsnd file or another container."
class CSoundContainerReference
{
	CUtlString m_namespace;
	// MPropertyFriendlyName = "Use Vsnd File"
	bool m_bUseReference;
	// MPropertySuppressExpr = "m_bUseReference == 0"
	// MPropertyFriendlyName = "Vsnd File"
	CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
	// MPropertySuppressExpr = "m_bUseReference == 1"
	// MPropertyFriendlyName = "Vsnd Container"
	CVoiceContainerBase* m_pSound;
};
