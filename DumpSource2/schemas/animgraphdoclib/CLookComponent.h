// MGetKV3ClassDefaults = {
//	"_class": "CLookComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_bNetworkLookTarget": true,
//	"m_lookHeadingID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookHeadingNormalizedID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookHeadingVelocityID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookPitchID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookDistanceID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookDirectionID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookTargetID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_lookTargetWorldSpaceID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	}
//}
class CLookComponent : public CAnimGraphDoc_Component
{
	// MPropertyFriendlyName = "Network Look Target"
	bool m_bNetworkLookTarget;
	// MPropertySuppressField
	AnimParamID m_lookHeadingID;
	// MPropertySuppressField
	AnimParamID m_lookHeadingNormalizedID;
	// MPropertySuppressField
	AnimParamID m_lookHeadingVelocityID;
	// MPropertySuppressField
	AnimParamID m_lookPitchID;
	// MPropertySuppressField
	AnimParamID m_lookDistanceID;
	// MPropertySuppressField
	AnimParamID m_lookDirectionID;
	// MPropertySuppressField
	AnimParamID m_lookTargetID;
	// MPropertySuppressField
	AnimParamID m_lookTargetWorldSpaceID;
};
