// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocument",
//	"m_nVersion": 0,
//	"m_sourceFilename": "",
//	"m_animationSkeletonName": "",
//	"m_secondaryAnimationSkeletonNames":
//	[
//	],
//	"m_eventTracks":
//	[
//	],
//	"m_nStartFrame": -1,
//	"m_nEndFrame": -1,
//	"m_flDurationOverrideSeconds": -1.000000,
//	"m_additiveType": "None",
//	"m_additiveBaseFilename": "",
//	"m_additiveBaseFrame": "FirstFrame",
//	"m_nAdditiveBaseFrameIdx": -1,
//	"m_bUseReferencePoseForSecondaryAnimAdditives": false,
//	"m_bonesToSampleInModelSpace":
//	[
//	]
//}
class CNmClipDocument : public CNmAnimDocument
{
	// MPropertyAttributeEditor = "ModelDocAssetBrowse( dmx, fbx, smd, *requiredoubleclick, *ShowRelatedFile )"
	CUtlString m_sourceFilename;
	// MPropertyAttributeEditor = "AssetBrowse( vnmskel, *requiredoubleclick )"
	CUtlString m_animationSkeletonName;
	// MPropertyAttributeEditor = "AssetBrowse( vnmskel, *requiredoubleclick )"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_secondaryAnimationSkeletonNames;
	// MPropertySuppressField
	CUtlLeanVector< CNmClipDocEventTrack > m_eventTracks;
	// MPropertyGroupName = "+Import Options"
	// MPropertyDescription = "Specify the import start frame (0 or a negative value means use the first frame in the authored animation)"
	int32 m_nStartFrame;
	// MPropertyGroupName = "+Import Options"
	// MPropertyDescription = "Specify the import end frame (0 or a negative value means use the last frame in the authored animation)"
	int32 m_nEndFrame;
	// MPropertyGroupName = "+Import Options"
	// MPropertyDescription = "Override the final duration of this clip in seconds (0 or a negative value means use the authored duration)"
	float32 m_flDurationOverrideSeconds;
	// MPropertyGroupName = "+Additive"
	CNmClipDocument::AdditiveType_t m_additiveType;
	// MPropertyGroupName = "+Additive"
	// MPropertyAttributeEditor = "AssetBrowse( dmx, fbx, *requiredoubleclick )"
	// MPropertyDescription = "The source file to use as the base of the additive"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CUtlString m_additiveBaseFilename;
	// MPropertyGroupName = "+Additive"
	// MPropertyDescription = "The frame to use when generating an additive, if you are generating relative to another animation and this is set to -1, we will extract each frame from it's corresponding frame in the base anim"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CNmClipDocument::AdditiveBaseFrame_t m_additiveBaseFrame;
	// MPropertyGroupName = "+Additive"
	// MPropertyDescription = "The frame to use when generating an additive, only valid for 'RelativeToFrame' and 'RelativeToAnimationFrame' "
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	int32 m_nAdditiveBaseFrameIdx;
	// MPropertyGroupName = "+Additive"
	// MPropertyDescription = "Should we calculate the additives for the secondary weapons from their reference pose or try to look up a pose in the specified animation"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bUseReferencePoseForSecondaryAnimAdditives;
	// MPropertyGroupName = "Advanced"
	// MPropertyAutoExpandSelf
	// MPropertyDescription = "List the set of bones that need to be sampled in model space for sub-frames. Warning! This can be REALLY expensive so be careful with this!"
	CUtlVector< CUtlString > m_bonesToSampleInModelSpace;
};
