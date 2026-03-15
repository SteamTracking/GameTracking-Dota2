// MGetKV3ClassDefaults = {
//	"_class": "CRagdollComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_weightLists":
//	[
//	],
//	"m_flSpringFrequencyMin": 0.000000,
//	"m_flSpringFrequencyMax": 15.000000,
//	"m_flMaxStretch": 56.000000,
//	"m_bSolidCollisionAtZeroWeight": false
//}
class CRagdollComponent : public CAnimGraphDoc_Component
{
	CUtlVector< CAnimGraphDoc_RigidBodyWeightList > m_weightLists;
	float32 m_flSpringFrequencyMin;
	float32 m_flSpringFrequencyMax;
	float32 m_flMaxStretch;
	bool m_bSolidCollisionAtZeroWeight;
};
