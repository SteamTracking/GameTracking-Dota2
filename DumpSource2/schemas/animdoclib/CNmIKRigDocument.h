// MGetKV3ClassDefaults = {
//	"_class": "CNmIKRigDocument",
//	"m_nVersion": 0,
//	"m_skeleton": "",
//	"m_links":
//	[
//	],
//	"m_targets":
//	[
//	]
//}
class CNmIKRigDocument : public CNmAnimDocument
{
	CResourceName m_skeleton;
	CUtlVector< CNmIKRigLink* > m_links;
	CUtlVector< CNmIKRigTarget > m_targets;
};
