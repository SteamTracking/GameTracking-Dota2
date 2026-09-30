// MVDataRoot
class CDOTAFlappySkywrathDifficulty
{
	CDOTAFlappySkywrathCharacter characterPlayer; // = { "flAcceleration": 50, "flActionCooldown": 1, "flInitialSpeed": 300, "flMaxSpeed": 800 }
	CDOTAFlappySkywrathCharacter characterOpponent; // = { "flAcceleration": 50, "flActionCooldown": 1, "flInitialSpeed": 300, "flMaxSpeed": 800 }
	float32 flRaceDistance; // = 10000
	float32 flBaseObstacleDistanceInterval; // = 1000
	float32 flBaseObstacleGapDistance; // = 400
	float32 flMinObstacleGapDistance; // = 300
	float32 flCollisionSpeedReduction; // = 200
	float32 flLandedMaxSpeed; // = 200
	float32 flCollisionInputCooldown; // = 1
};
