// MGetKV3ClassDefaults = {
//	"_class": "CNmSkeletonDocument",
//	"m_nVersion": 0,
//	"m_sourceFilename": "",
//	"m_rootBoneName": "root_motion",
//	"m_flGlobalScale": 1.000000,
//	"m_bIsAttachableProp": false,
//	"m_secondarySkeletons":
//	[
//	],
//	"m_highLODBones":
//	[
//	],
//	"m_boneMaskSetDefinitions":
//	[
//	],
//	"m_previewModelName": ""
//}
class CNmSkeletonDocument : public CNmAnimDocument
{
	// MPropertyAttributeEditor = "ModelDocAssetBrowse( dmx, fbx, smd, *requiredoubleclick, *ShowRelatedFile )"
	CUtlString m_sourceFilename;
	CUtlString m_rootBoneName;
	float32 m_flGlobalScale;
	bool m_bIsAttachableProp;
	// MPropertyFriendlyName = "Expected secondary skeletons"
	// MPropertyAutoExpandSelf
	CUtlVector< CNmSkeletonDocument::SecondarySkeleton_t > m_secondarySkeletons;
	// MPropertySuppressField
	CUtlVector< CUtlString > m_highLODBones;
	// MPropertySuppressField
	CUtlVector< NmBoneMaskSetDefinition_t > m_boneMaskSetDefinitions;
	// MPropertyGroupName = "+Preview"
	// MPropertyAttributeEditor = "AssetBrowse( vmdl, *requiredoubleclick )"
	CUtlString m_previewModelName;
};
