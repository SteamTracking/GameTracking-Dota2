// MGetKV3ClassDefaults = {
//	"_class": "CSlopeComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_flTraceDistance": 36.000000,
//	"m_slopeAngleID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_slopeHeadingID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_slopeAngleSideID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_slopeAngleFrontID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_slopeNormalID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_slopeNormal_WorldSpaceID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	}
//}
class CSlopeComponent : public CAnimGraphDoc_Component
{
	// MPropertyFriendlyName = "Trace Distance"
	float32 m_flTraceDistance;
	// MPropertySuppressField
	AnimParamID m_slopeAngleID;
	// MPropertySuppressField
	AnimParamID m_slopeHeadingID;
	// MPropertySuppressField
	AnimParamID m_slopeAngleSideID;
	// MPropertySuppressField
	AnimParamID m_slopeAngleFrontID;
	// MPropertySuppressField
	AnimParamID m_slopeNormalID;
	// MPropertySuppressField
	AnimParamID m_slopeNormal_WorldSpaceID;
};
