// MVDataRoot
class ArtyLevelInfo_t
{
	ArtyLevelID_t m_unID;
	CUtlString m_sLocLevelName;
	ArtyLevelObjectInstance_t m_playerInfo; // = { "_class": "ArtyLevelObjectInstance_t", "m_bFacingLeft": true, "m_bRandomPosition": true, "m_bRepositionToTerrain": true, "m_eTeam": "k_eThem", "m_flAppearanceChance": 1, "m_flLeftBorderWidthMult": 0.5, "m_flLeftObjectOffset": 64, "m_flRightBorderWidthMult": 0.975, "m_flRightObjectOffset": 64, "m_flRotation": 0, "m_flTimeOffset": 2, "m_flYawOffset": 0, "m_szGameObject": "", "m_szLeftBorderObject": "", "m_szName": "", "m_szRightBorderObject": "", "m_vPosition": [ 0, 0 ], "m_vScale": [ 1, 1 ], "m_vecCustomOrders": [  ] }
	CUtlVector< ArtyLevelObjectInstance_t > m_vecGameObjects;
	CUtlVector< ArtyLevelWeaponInstance_t > m_vecWeapons;
	int32 m_nLevelCompletePoints;
	int32 m_nTimeBonusBasePoints;
	int32 m_nTimeBonusMaxPoints;
	int32 m_nTimeBonusFastTime;
	int32 m_nTimeBonusMaxTime;
	float32 m_flBackgroundOffsetX;
	int32[3] m_aryStarPointThresholds;
	CPanoramaImageName m_sBackgroundImage;
	CPanoramaImageName m_sTerrainBackgroundImage;
	CPanoramaImageName m_sTerrainImage;
	CPanoramaImageName m_sTerrainForegroundImage;
};
