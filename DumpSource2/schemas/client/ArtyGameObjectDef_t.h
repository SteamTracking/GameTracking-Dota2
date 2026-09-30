// MVDataRoot
// MVDataNodeType = 1
// MHasKV3TransferPolymorphicClassname
class ArtyGameObjectDef_t
{
	ArtyGameObjectID_t m_unID;
	// MPropertyCustomFGDType = "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
	CUtlString m_szGraphicsDef;
	CUtlString m_szDeathSound;
	EArtyHitboxType m_eHitboxType; // = "k_eCircle"
	Vector2D m_vHitboxMin;
	Vector2D m_vHitboxMax;
	float32 m_flHitboxRadius; // = 1
	float32 m_flHitboxExtents; // = 1
	bool m_bInheritTransform;
	bool m_bInheritRotation; // = true
	bool m_bInheritVisibility;
	bool m_bInheritState; // = true
	bool m_bDestroyOnFallThrough; // = true
	float32 m_flFallDamagePerVelocity; // = 1
	bool m_bDeathCausesExplosion;
	float32 m_flExplosionDamage;
	float32 m_flExplosionRadius; // = -1
	float32 m_flExplosionTerrainRadius; // = -1
	float32 m_flGravityMult; // = 1
	float32 m_flDragMult; // = 1
	float32 m_flWindMult; // = 1
	float32 m_flDeathMaxScaleFactor; // = 1
	bool m_bAllowPhysicsInDying;
	EArtyGameObjectType m_eType; // = "k_eTypeObject"
	EArtyLayer m_eLayer; // = "k_eDefault"
	float32 m_flMaxHealth; // = 1
	float32 m_flHealth; // = 1
	bool m_bVisible; // = true
	bool m_bCanCollide; // = true
	bool m_bDoPhysics;
	float32 m_flLifetime; // = -1
	float32 m_flDieTime; // = 0.1
	CUtlVector< ArtyGameObjectInstance_t > m_vecChildren;
};
