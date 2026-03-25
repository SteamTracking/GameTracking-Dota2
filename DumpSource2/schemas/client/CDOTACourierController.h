class CDOTACourierController
{
	bool m_bAutoCourierAutoBurst;
	bool m_bAutoCourierAutoDeliver;
	bool m_bDeliverWhileVisibleOnly;
	CHandle< C_DOTA_Unit_Courier > m_hCourier;
	PlayerID_t m_nPlayerID;
	bool m_bUseNewLogic;
	DOTA_SHOP_TYPE m_eFSMShop;
	CHandle< C_BaseEntity > m_hFSMUnit;
	ECourierState m_eFSMState;
	bool m_bFSMStashAfter;
	bool m_bManualRequest;
};
