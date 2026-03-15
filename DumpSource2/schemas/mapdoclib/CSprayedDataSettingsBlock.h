// MGetKV3ClassDefaults = {
//	"m_flMinDensity": 1.000000,
//	"m_flMaxDensity": 1.000000,
//	"m_flMinScale": 0.500000,
//	"m_flMaxScale": 1.000000,
//	"m_vMinAngle":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vMaxAngle":
//	[
//		0.000000,
//		360.000000,
//		0.000000
//	],
//	"m_vMinColor":
//	[
//		1.000000,
//		1.000000,
//		1.000000
//	],
//	"m_vMaxColor":
//	[
//		1.000000,
//		1.000000,
//		1.000000
//	],
//	"m_flSpacingMul": 1.000000,
//	"m_flSlopeThreshold": 100000.000000,
//	"m_vMasterDirection":
//	[
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_flMasterDirectionInfluence": 0.000000,
//	"m_bEnabled": true
//}
class CSprayedDataSettingsBlock
{
	float32 m_flMinDensity;
	float32 m_flMaxDensity;
	float32 m_flMinScale;
	float32 m_flMaxScale;
	QAngle m_vMinAngle;
	QAngle m_vMaxAngle;
	Vector m_vMinColor;
	Vector m_vMaxColor;
	float32 m_flSpacingMul;
	float32 m_flSlopeThreshold;
	Vector m_vMasterDirection;
	float32 m_flMasterDirectionInfluence;
	bool m_bEnabled;
};
