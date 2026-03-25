// MGetKV3ClassDefaults = {
//	"m_startingLocalToWorld":
//	[
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_prevLocalToWorld":
//	[
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_finalLocalToWorld":
//	[
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000,
//		0.000000,
//		0.000000,
//		0.000000,
//		1.000000
//	],
//	"m_rootMotion":
//	{
//		"m_deltaTransform":
//		{
//			"m_iszName":
//			[
//				0.000000,
//				0.000000,
//				0.000000
//			],
//			"m_iszValue":
//			{
//				"m_angle": 0.000000
//			}
//		},
//		"m_vVelocityMS":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_vUpOverride":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		]
//	},
//	"m_updateID": -1,
//	"m_flLastTimeStep": 0.000000,
//	"m_flPrevAnimTime": 0.000000,
//	"m_flNextAnimTime": 0.000000,
//	"m_bAwaken": false,
//	"m_bTeleported": false,
//	"m_bIsClient": false,
//	"m_bIsPredicted": false
//}
class PerTickSettings_t
{
	CTransform m_startingLocalToWorld;
	CTransform m_prevLocalToWorld;
	CTransform m_finalLocalToWorld;
	CRootMotion m_rootMotion;
	int32 m_updateID;
	float32 m_flLastTimeStep;
	float32 m_flPrevAnimTime;
	float32 m_flNextAnimTime;
	bool m_bAwaken;
	bool m_bTeleported;
	bool m_bIsClient;
	bool m_bIsPredicted;
};
