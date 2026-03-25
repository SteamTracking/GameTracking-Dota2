class CBaseAnimGraphController : public CSkeletonAnimationController
{
	AnimationAlgorithm_t m_nAnimationAlgorithm;
	// MKV3TransferSaveOpsForField = "GetAnimGraphSaveRestoreOps"
	CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
	ExternalAnimGraphHandle_t m_nNextExternalGraphHandle;
	CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames;
	C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons;
	int32 m_nSecondarySkeletonMasterCount;
	float32 m_flSoundSyncTime;
	uint32 m_nActiveIKChainMask;
	HSequence m_hSequence;
	GameTime_t m_flSeqStartTime;
	float32 m_flSeqFixedCycle;
	AnimLoopMode_t m_nAnimLoopMode;
	CNetworkedQuantizedFloat m_flPlaybackRate;
	SequenceFinishNotifyState_t m_nNotifyState;
	bool m_bNetworkedAnimationInputsChanged;
	bool m_bNetworkedSequenceChanged;
	bool m_bLastUpdateSkipped;
	bool m_bSequenceFinished;
	GameTick_t m_nPrevAnimUpdateTick;
	CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2;
	// MNotSaved
	C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
	// MNotSaved
	int32 m_nSerializePoseRecipeSizeAG2;
	// MNotSaved
	int32 m_nSerializePoseRecipeVersionAG2;
	int32 m_nServerGraphInstanceIteration;
	int32 m_nServerSerializationContextIteration;
	ResourceId_t m_primaryGraphId;
	C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
	C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
	CGlobalSymbol m_sAnimGraph2Identifier;
	// MKV3TransferSaveOpsForField = "GetAnimGraph2SaveRestoreOps"
	CNmGraphInstance* m_pGraphInstanceAG2;
	// MKV3TransferSaveOpsForField = "GetExternalAnimGraphSaveRestoreOps"
	CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs;
	AnimationAlgorithm_t m_nPrevAnimationAlgorithm;
};
