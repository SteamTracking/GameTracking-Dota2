// MGetKV3ClassDefaults = {
//	"m_goalWayPointPos":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vMoveDir":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vAcceleration":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flCurrentMoveSpeed": 0.000000,
//	"m_flTargetMoveSpeed": 0.000000,
//	"m_flGoalDistance": -1.000000,
//	"m_flBoundaryRadius": 100.000000,
//	"m_bGoalChanged": false,
//	"m_bHasPath": false,
//	"m_flFacingHeading": 0.000000,
//	"m_vManualFacingDirection":
//	[
//		1.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vManualFacingTarget": null,
//	"m_nFacingMode": 0,
//	"m_bForceFacing": false,
//	"m_nActiveMotorIndex": -1,
//	"m_bOnGround": true,
//	"m_vFacingPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vPrevFacingPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
class MovementData
{
	Vector m_goalWayPointPos;
	CAnimNetVar< Vector > m_vMoveDir;
	CAnimNetVar< Vector > m_vAcceleration;
	CAnimNetVar< float32 > m_flCurrentMoveSpeed;
	CAnimNetVar< float32 > m_flTargetMoveSpeed;
	CAnimNetVar< float32 > m_flGoalDistance;
	CAnimNetVar< float32 > m_flBoundaryRadius;
	bool m_bGoalChanged;
	CAnimNetVar< bool > m_bHasPath;
	CAnimNetVar< float32 > m_flFacingHeading;
	Vector m_vManualFacingDirection;
	VectorWS m_vManualFacingTarget;
	CAnimNetVar< uint8 > m_nFacingMode;
	CAnimNetVar< bool > m_bForceFacing;
	CAnimNetVar< int32 > m_nActiveMotorIndex;
	CAnimNetVar< bool > m_bOnGround;
	CAnimNetVar< Vector > m_vFacingPosition;
	Vector m_vPrevFacingPosition;
};
