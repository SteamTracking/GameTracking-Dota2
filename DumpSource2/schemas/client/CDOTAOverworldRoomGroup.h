class CDOTAOverworldRoomGroup
{
	OverworldRoomGroupID_t m_unGroupID;
	CUtlString m_strLocName;
	// MPropertyDescription = "The name of the dynamic prop entity in the vmap that this room group is visually parented to."
	CUtlString m_strEntityParentName;
	// MPropertyDescription = "Size in Overworld coordinates. This should completely encompass the dynamic prop entity."
	Vector2D m_vSize;
	// MPropertyDescription = "Top left of the hover region, relative to the top left of the room group. Only used if m_vHoverRegionSize is set."
	Vector2D m_vHoverRegionPos;
	// MPropertyDescription = "Size of the hover region. If zero, the full m_vSize is used."
	Vector2D m_vHoverRegionSize;
	CUtlVector< OverworldRoomID_t > m_vecRooms;
	float32 m_flTrainCarViewDistance; // = 100
	float32 m_flTrainCarZoomedInViewDistance; // = -50
	float32 m_flVisualNovelOpenDistanceModifier;
	Vector2D m_flTrainCarViewOffset;
	int32 m_nNavPosX;
	int32 m_nNavPosY;
};
