class C_RopeKeyframe : public C_BaseModelEntity
{
	// MNotSaved
	CBitVec< 10 > m_LinksTouchingSomething;
	// MNotSaved
	int32 m_nLinksTouchingSomething;
	// MNotSaved
	bool m_bApplyWind;
	// MNotSaved
	int32 m_fPrevLockedPoints;
	// MNotSaved
	int32 m_iForcePointMoveCounter;
	// MNotSaved
	bool[2] m_bPrevEndPointPos;
	// MNotSaved
	VectorWS[2] m_vPrevEndPointPos;
	// MNotSaved
	float32 m_flCurScroll;
	// MNotSaved
	float32 m_flScrollSpeed;
	// MNotSaved
	uint16 m_RopeFlags;
	// MNotSaved
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex;
	// MNotSaved
	uint8 m_nSegments;
	// MNotSaved
	CHandle< C_BaseEntity > m_hStartPoint;
	// MNotSaved
	CHandle< C_BaseEntity > m_hEndPoint;
	// MNotSaved
	AttachmentHandle_t m_iStartAttachment;
	// MNotSaved
	AttachmentHandle_t m_iEndAttachment;
	// MNotSaved
	uint8 m_Subdiv;
	// MNotSaved
	int16 m_RopeLength;
	// MNotSaved
	int16 m_Slack;
	// MNotSaved
	float32 m_TextureScale;
	// MNotSaved
	uint8 m_fLockedPoints;
	// MNotSaved
	uint8 m_nChangeCount;
	// MNotSaved
	float32 m_Width;
	// MNotSaved
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate;
	// MNotSaved
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
	// MNotSaved
	int32 m_TextureHeight;
	// MNotSaved
	Vector m_vecImpulse;
	// MNotSaved
	Vector m_vecPreviousImpulse;
	// MNotSaved
	float32 m_flCurrentGustTimer;
	// MNotSaved
	float32 m_flCurrentGustLifetime;
	// MNotSaved
	float32 m_flTimeToNextGust;
	// MNotSaved
	Vector m_vWindDir;
	// MNotSaved
	Vector m_vColorMod;
	// MNotSaved
	VectorWS[2] m_vCachedEndPointAttachmentPos;
	// MNotSaved
	QAngle[2] m_vCachedEndPointAttachmentAngle;
	// MNotSaved
	bool m_bConstrainBetweenEndpoints;
	// MNotSaved
	bitfield:1 m_bEndPointAttachmentPositionsDirty;
	// MNotSaved
	bitfield:1 m_bEndPointAttachmentAnglesDirty;
	// MNotSaved
	bitfield:1 m_bNewDataThisFrame;
	// MNotSaved
	bitfield:1 m_bPhysicsInitted;
};
