class CVMixRuntimeGraph
{
	// MKV3TransferName = "Name"
	CUtlString m_name;
	int32 m_nGraphOutputChannels; // = -1
	bool m_bIsMainGraph;
	// MKV3TransferName = "m_Submixes"
	CUtlVector< CVMixSubmix > m_submixes;
	// MKV3TransferName = "m_Processors"
	CUtlVector< std::unique_ptr< CVMixBaseProcessorDesc > > m_processorNodes;
	CUtlVector< CVMixControlInput > m_controlInputs;
	CUtlVector< CVMixControlInput > m_controlTransientInputs;
	CUtlVector< CVMixControlInputArray > m_controlInputArrays;
	CUtlVector< CVMixControlOutput > m_controlOutputs;
	CUtlVector< CVMixNameInput > m_nameInputs;
	CUtlVector< CVMixVsndInput > m_vsndInputs;
	CUtlVector< CVMixImpulseResponseInput > m_impulseResponseInputs;
	// MKV3TransferName = "m_MixCommands"
	CUtlVector< CVMixCommand > m_mixCommands;
	CUtlVector< float32 > m_values;
	CUtlVector< CUtlVector< float32 > > m_valueArrays;
	CUtlVector< uint64 > m_impulseResponseValues;
	CUtlVector< float32 > m_controlPoints;
	CUtlVector< CVMixCurveHeader > m_curves;
	CUtlVector< CVMixAudioMeter > m_audioMeters;
	CUtlVector< CVMixControlMeter > m_controlMeters;
	CUtlVector< CVMixNameInputMeter > m_nameInputMeters;
	CUtlVector< CVMixAdditionalOutput > m_additionalOutputs;
	CUtlVector< CVMixAutomaticControlInput > m_automaticControlInputs;
	KeyValues3 m_sources;
};
