// MGetKV3ClassDefaults = {
//	"_class": "CMovementComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_motors":
//	[
//	],
//	"m_bNetworkPath": true,
//	"m_facingDamping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	},
//	"m_bNetworkFacing": true,
//	"m_paramIDs":
//	[
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	]
//}
class CMovementComponent : public CAnimGraphDoc_Component
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Motor > > m_motors;
	// MPropertyFriendlyName = "Network Path"
	bool m_bNetworkPath;
	// MPropertyGroupName = "+Facing"
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_facingDamping;
	// MPropertyGroupName = "+Facing"
	// MPropertyFriendlyName = "Network Facing"
	bool m_bNetworkFacing;
	// MPropertySuppressField
	AnimParamID[34] m_paramIDs;
};
