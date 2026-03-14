// MGetKV3ClassDefaults = {
//	"_class": "CRagdollUpdateNode",
//	"m_nodePath":
//	{
//		"m_path":
//		[
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			},
//			{
//				"m_id": <HIDDEN FOR DIFF>,
//			}
//		],
//		"m_nCount": 0
//	},
//	"m_networkMode": "ServerAuthoritative",
//	"m_name": "",
//	"m_pChildNode":
//	{
//		"m_nodeIndex": -1
//	},
//	"m_nWeightListIndex": -1,
//	"m_poseControlMethod": "Absolute"
//}
class CRagdollUpdateNode : public CUnaryUpdateNode
{
	int32 m_nWeightListIndex;
	RagdollPoseControl m_poseControlMethod;
};
