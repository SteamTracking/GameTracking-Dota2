// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_HitReactNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_inputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_flMinDelayBetweenHits": 0.000000,
//	"m_triggerParamName": "",
//	"m_hitBoneParamName": "",
//	"m_hitOffsetParamName": "",
//	"m_hitDirectionParamName": "",
//	"m_hitStrengthParamName": "",
//	"m_triggerParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_hitBoneParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_hitOffsetParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_hitDirectionParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_hitStrengthParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_weightListName": "",
//	"m_hipBoneName": "",
//	"m_flHipBoneTranslationScale": 1.000000,
//	"m_nEffectedBoneCount": 4,
//	"m_flMaxImpactForce": 100.000000,
//	"m_flMinImpactForce": 50.000000,
//	"m_flWhipImpactScale": 1.000000,
//	"m_flCounterRotationScale": 0.500000,
//	"m_flDistanceFadeScale": 1.000000,
//	"m_flPropagationScale": 1.000000,
//	"m_flWhipDelay": 0.050000,
//	"m_flSpringStrength": 15.000000,
//	"m_flWhipSpringStrength": 10.000000,
//	"m_flHipDipSpringStrength": 10.000000,
//	"m_flHipDipImpactScale": 1.000000,
//	"m_flHipDipDelay": 0.050000,
//	"m_bResetBase": true
//}
// MPropertyFriendlyName = "Procedural Hit Reacts"
class CAnimGraphDoc_HitReactNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Minimum Delay Between Hits"
	float32 m_flMinDelayBetweenHits;
	// MPropertySuppressField
	CUtlString m_triggerParamName;
	// MPropertySuppressField
	CUtlString m_hitBoneParamName;
	// MPropertySuppressField
	CUtlString m_hitOffsetParamName;
	// MPropertySuppressField
	CUtlString m_hitDirectionParamName;
	// MPropertySuppressField
	CUtlString m_hitStrengthParamName;
	// MPropertyFriendlyName = "Trigger Parameter"
	// MPropertyAttributeChoiceName = "BoolParameter"
	AnimParamID m_triggerParam;
	// MPropertyFriendlyName = "Hit Bone Parameter"
	// MPropertyAttributeChoiceName = "IntParameter"
	AnimParamID m_hitBoneParam;
	// MPropertyFriendlyName = "Hit Offset Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_hitOffsetParam;
	// MPropertyFriendlyName = "Hit Direction Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_hitDirectionParam;
	// MPropertyFriendlyName = "Hit Strength Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_hitStrengthParam;
	// MPropertyFriendlyName = "Bone Weights"
	// MPropertyAttributeChoiceName = "BoneMask"
	CUtlString m_weightListName;
	// MPropertyFriendlyName = "Hip Bone"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_hipBoneName;
	// MPropertyFriendlyName = "Hip Translation Scale"
	float32 m_flHipBoneTranslationScale;
	// MPropertyFriendlyName = "Number of bone effected"
	int32 m_nEffectedBoneCount;
	// MPropertyFriendlyName = "Max Impact Force"
	float32 m_flMaxImpactForce;
	// MPropertyFriendlyName = "Min Impact Force"
	float32 m_flMinImpactForce;
	// MPropertyFriendlyName = "Whip Impact Scale"
	float32 m_flWhipImpactScale;
	// MPropertyFriendlyName = "Counter Rotation Scale"
	float32 m_flCounterRotationScale;
	// MPropertyFriendlyName = "Distance Fade Scale"
	float32 m_flDistanceFadeScale;
	// MPropertyFriendlyName = "Propagation Scale"
	float32 m_flPropagationScale;
	// MPropertyFriendlyName = "Whip Delay Time"
	float32 m_flWhipDelay;
	// MPropertyFriendlyName = "Spring Strength"
	float32 m_flSpringStrength;
	// MPropertyFriendlyName = "Whip Spring Strength"
	float32 m_flWhipSpringStrength;
	// MPropertyFriendlyName = "Hip Dip Spring Strength"
	float32 m_flHipDipSpringStrength;
	// MPropertyFriendlyName = "Hip Dip Scale"
	float32 m_flHipDipImpactScale;
	// MPropertyFriendlyName = "Hip Dip Delay Time"
	float32 m_flHipDipDelay;
	// MPropertyFriendlyName = "Reset Child"
	bool m_bResetBase;
};
