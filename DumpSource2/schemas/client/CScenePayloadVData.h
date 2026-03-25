// MGetKV3ClassDefaults = {
//	"m_eNPCBehavior": "eTakeOver",
//	"m_sPulseFile": "",
//	"m_sSceneFile": "",
//	"m_ePriority": "INTERACT_PRIORITY_NONE"
//}
// MVDataRoot
// MVDataOverlayType = 1
// MVDataAssociatedFile = "scripts/scenes.vdata"
class CScenePayloadVData
{
	ENPCBehaviorOverride_t m_eNPCBehavior;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > m_sPulseFile;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoSceneResource > > m_sSceneFile;
	InteractionPriority_t m_ePriority;
};
