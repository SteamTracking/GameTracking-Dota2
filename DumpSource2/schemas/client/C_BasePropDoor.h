class C_BasePropDoor : public C_DynamicProp
{
	// MNotSaved
	DoorState_t m_eDoorState;
	// MNotSaved
	bool m_modelChanged;
	// MNotSaved
	bool m_bLocked;
	// MNotSaved
	bool m_bNoNPCs;
	// MNotSaved
	VectorWS m_closedPosition;
	// MNotSaved
	QAngle m_closedAngles;
	// MNotSaved
	CHandle< C_BasePropDoor > m_hMaster;
	// MNotSaved
	Vector m_vWhereToSetLightingOrigin;
};
