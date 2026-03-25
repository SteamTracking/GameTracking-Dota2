// MGetKV3ClassDefaults = {
//	"id": 0,
//	"edictindex": -1,
//	"saveentityindex": -1,
//	"bWasSaved": false,
//	"flags": "",
//	"classname": "",
//	"globalname": "",
//	"entityname": "",
//	"landmarkModelSpace":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
class entitytable_t
{
	int32 id;
	CEntityIndex edictindex;
	CEntityIndex saveentityindex;
	bool bWasSaved;
	SaveRestoreTableFlags_t flags;
	CUtlSymbolLarge classname;
	CUtlSymbolLarge globalname;
	CUtlSymbolLarge entityname;
	Vector landmarkModelSpace;
	// MKV3TransferSaveOpsForField = "GetEntityKeyValuesSaveRestoreOps"
	CEntityKeyValues* m_pPrecacheEntityKeys;
};
