// MGetKV3ClassDefaults = {
//	"m_flFireTime": null,
//	"m_targetType": 0,
//	"m_pTarget": "",
//	"m_pTargetInput": "",
//	"m_hActivator": null,
//	"m_hCaller": null,
//	"m_nOutputID": 0,
//	"m_hEntTarget": null
//}
class EntityIOQueuePrioritizedEvent_t
{
	GameTime_t m_flFireTime;
	EntityIOTargetType_t m_targetType;
	CUtlSymbolLarge m_pTarget;
	CUtlSymbolLarge m_pTargetInput;
	CEntityHandle m_hActivator;
	CEntityHandle m_hCaller;
	int32 m_nOutputID;
	CEntityHandle m_hEntTarget;
	// MSaveOpsForField = "GetVariantSaveDataOps"
	CVariantBase< CVariantDefaultAllocator > m_variantValue;
};
