// MGetKV3ClassDefaults = {
//	"m_unGroupID": 0,
//	"m_strLocName": "",
//	"m_strEntityParentName": "",
//	"m_vPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_vSize":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_vecRooms":
//	[
//	],
//	"m_flTrainCarViewDistance": 100.000000
//}
class CDOTAOverworldRoomGroup
{
	OverworldRoomGroupID_t m_unGroupID;
	CUtlString m_strLocName;
	// MPropertyDescription = "The name of the dynamic prop entity in the vmap that this room group is visually parented to."
	CUtlString m_strEntityParentName;
	// MPropertyDescription = "Position in Overworld coordinates."
	Vector2D m_vPosition;
	// MPropertyDescription = "Size in Overworld coordinates. This should completely encompass the dynamic prop entity."
	Vector2D m_vSize;
	CUtlVector< OverworldRoomID_t > m_vecRooms;
	float32 m_flTrainCarViewDistance;
};
