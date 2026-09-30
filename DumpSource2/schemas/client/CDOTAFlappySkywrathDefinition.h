// MVDataRoot
// MVDataSingleton
class CDOTAFlappySkywrathDefinition
{
	CUtlString strID;
	CUtlString sLayoutPath;
	CUtlString sMapFile;
	CUtlString sMapLoopingFile;
	CUtlString sMapBGFile;
	CUtlVector< CDOTAFlappySkywrathDifficulty > vecDifficulties;
	float32 flMinimumSpeed; // = 100
	float32 flGravity; // = -2000
	float32 flJumpPower; // = 600
	float32 flGlideAcceleration; // = -20
	float32 flGlideFallSpeed; // = 0.25
	float32 flDashDuration; // = 1
	float32 flDashBoost; // = 50
	float32 flDashSpeed; // = 200
	float32 flDiveDuration; // = 0.5
	float32 flDiveSpeed; // = 100
	float32 flTrackDistance; // = 5120
	float32 flCameraDistance; // = 3672
	Vector vCameraOffset; // = [ 0, 0, 500 ]
	Vector2D vCameraEdgeThresholds; // = [ -400, 0 ]
	float32 flCameraAcceleration; // = 50
	Vector2D vPlayerSize; // = [ 100, 100 ]
	Vector2D vPlayerVerticalBounds; // = [ 30, 650 ]
	Vector2D vObstacleVerticalBounds; // = [ 30, 900 ]
	Vector2D vObstacleHorizontalBounds; // = [ -900, 900 ]
	float32 flTopOffsetToTip; // = -1060
	float32 flBottomOffsetToTip; // = 764
	CUtlVector< CDOTAFlappySkywrathInputAction > vecInputActions;
};
