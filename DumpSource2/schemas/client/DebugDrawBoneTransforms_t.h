// MGetKV3ClassDefaults = {
//	"_class": "DebugDrawBoneTransforms_t",
//	"vecBones":
//	[
//	]
//}
class DebugDrawBoneTransforms_t : public DebugSnapshotBaseStructuredData_t
{
	CUtlVectorFixedGrowable< CTransform, 128 > vecBones;
};
