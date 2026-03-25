class CPlayer_MovementServices : public CPlayerPawnComponent
{
	int32 m_nImpulse;
	// MNotSaved
	CInButtonState m_nButtons;
	uint64 m_nQueuedButtonDownMask;
	uint64 m_nQueuedButtonChangeMask;
	uint64 m_nButtonDoublePressed;
	// MNotSaved
	uint32[64] m_pButtonPressedCmdNumber;
	// MNotSaved
	uint32 m_nLastCommandNumberProcessed;
	uint64 m_nToggleButtonDownMask;
	float32 m_flCmdForwardMove;
	float32 m_flCmdLeftMove;
	float32 m_flCmdUpMove;
	float32 m_flMaxspeed;
	float32[4] m_arrForceSubtickMoveWhen;
	float32 m_flForwardMove;
	float32 m_flLeftMove;
	float32 m_flUpMove;
	Vector m_vecLastMovementImpulses;
	QAngle m_vecOldViewAngles;
};
