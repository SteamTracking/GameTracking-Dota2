// MHasKV3TransferPolymorphicClassname
class EventGrantDefinition_MonsterHunterMaterials_t : public EventGrantDefinition_t
{
	EMonsterHunterMaterialsSource_t m_eMaterialSource; // = "Invalid"
	item_definition_index_t m_unItemDef;
	MonsterHunterCodexID_t m_unCodexID;
	EventGrantDefinition_MonsterHunterMaterials_t::MaterialAmount_t[34] m_aMaterials;
};
