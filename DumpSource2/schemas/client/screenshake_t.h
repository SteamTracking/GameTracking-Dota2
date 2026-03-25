// MGetKV3ClassDefaults = {
//	"endtime": null,
//	"duration": 0.000000,
//	"amplitude": 0.000000,
//	"frequency": 0.000000,
//	"nextShake": null,
//	"offset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"angle": 0.000000,
//	"direction":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"nShakeType": 0
//}
class screenshake_t
{
	GameTime_t endtime;
	float32 duration;
	float32 amplitude;
	float32 frequency;
	GameTime_t nextShake;
	Vector offset;
	float32 angle;
	Vector direction;
	uint8 nShakeType;
};
