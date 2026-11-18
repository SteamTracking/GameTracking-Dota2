// MVDataRoot
// MVDataNodeType = 1
// MPropertyPolymorphicClass
// MVDataFileExtension = "vsnd"
// MVDataSingleton
// MPropertyFriendlyName = "VSND Container"
// MPropertyDescription = "Voice Container Base"
// MHasKV3TransferPolymorphicClassname
class CVoiceContainerBase
{
	CUtlStringToken m_nResourceName;
	bool m_bRegisteredVMix;
	bool m_bIsValidForPlayback;
	// MPropertySuppressField
	CVSound m_vSound;
	// MPropertySuppressExpr = "true"
	CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer;
};
