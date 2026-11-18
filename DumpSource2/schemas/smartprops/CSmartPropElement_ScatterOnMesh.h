// MPropertyFriendlyName = "Scatter on Mesh"
// MPropertyDescription = "Scatter Children on a Mesh."
// MHasKV3TransferPolymorphicClassname
class CSmartPropElement_ScatterOnMesh : public CSmartPropElement_Deformer
{
	// MPropertyStartGroup = ""
	// MPropertyDescription = "Name of the mesh input on the Smart Prop instance in Hammer."
	CUtlString m_MeshName; // = "Input Mesh"
	// MPropertyStartGroup = "+Placement"
	// MPropertyFriendlyName = "Distribution"
	// MPropertyDescription = "Specifies point distribution method."
	CSmartPropAttributeScatterOnMeshDistributionMode m_nDistributionMode; // = "UNIFORM_RANDOM"
	// MPropertyFriendlyName = "Count Mode"
	// MPropertyDescription = "Specifies how the number of points are set."
	// MPropertySuppressExpr = "m_nDistributionMode != UNIFORM_RANDOM"
	CSmartPropAttributeScatterOnMeshCountMode m_nCountMode; // = "DENSITY"
	// MPropertyFriendlyName = "Density"
	// MPropertyDescription = "Points per square foot / per 144 square units."
	// MPropertySuppressExpr = "m_nDistributionMode != UNIFORM_RANDOM || m_nCountMode != DENSITY"
	CSmartPropAttributeFloat m_flDensity; // = 1
	// MPropertyFriendlyName = "Count"
	// MPropertyDescription = "Fixed total count of points."
	// MPropertySuppressExpr = "m_nDistributionMode != UNIFORM_RANDOM || m_nCountMode != TOTAL_COUNT"
	CSmartPropAttributeInt m_nCount; // = 100
	// MPropertyFriendlyName = "Remove Overlaps"
	// MPropertyDescription = "Remove overlapping points based on their point size."
	// MPropertySuppressExpr = "m_nDistributionMode != UNIFORM_RANDOM"
	CSmartPropAttributeBool m_bRemoveOverlaps;
	// MPropertyFriendlyName = "Coverage"
	// MPropertyDescription = "Coverage 0 to 1. At 1 it places as many points as it can fit."
	// MPropertyAttributeRange = "0 1"
	// MPropertySuppressExpr = "m_nDistributionMode != POISSON_DISK"
	CSmartPropAttributeFloat m_flCoverage; // = 1
	// MPropertyStartGroup = "+Size"
	// MPropertyFriendlyName = "Size Mode"
	// MPropertyDescription = "Specifies how point size is set."
	CSmartPropAttributeScatterOnMeshSizeMode m_nSizeMode; // = "FIXED_SIZE"
	// MPropertyFriendlyName = "Radius"
	// MPropertyDescription = "Radius of every point."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_nSizeMode != FIXED_SIZE"
	CSmartPropAttributeFloat m_flRadius; // = 16
	// MPropertyFriendlyName = "Min Radius"
	// MPropertyDescription = "Minimum radius of a point."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_nSizeMode != RANDOM_RANGE"
	CSmartPropAttributeFloat m_flMinRadius; // = 8
	// MPropertyFriendlyName = "Max Radius"
	// MPropertyDescription = "Maximum radius of a point."
	// MPropertyAttributeRange = "biased 0 1024"
	// MPropertySuppressExpr = "m_nSizeMode != RANDOM_RANGE"
	CSmartPropAttributeFloat m_flMaxRadius; // = 32
	// MPropertyFriendlyName = "Size Classes"
	// MPropertyDescription = "List of size classes with set size and weight."
	// MPropertySuppressExpr = "m_nSizeMode != SIZE_CLASSES"
	CUtlVector< ScatterOnMeshSizeClass_t > m_SizeClasses;
	// MPropertyStartGroup = "+Orientation"
	// MPropertyFriendlyName = "Up Vector"
	// MPropertyDescription = "Up Vector for placed points on the mesh."
	CSmartPropAttributeVector m_vUpVector; // = [ 0, 0, 1 ]
	// MPropertyFriendlyName = "Orient To Surface"
	// MPropertyDescription = "Lerp between up vector and surface normal."
	// MPropertyAttributeRange = "0 1"
	CSmartPropAttributeFloat m_flOrientToSurface; // = 1
	// MPropertyStartGroup = "+Output Variables"
	// MPropertyFriendlyName = "Radius Output Variable"
	// MPropertyDescription = "Variable name to write point radius to."
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputRadiusVariableName;
	// MPropertyFriendlyName = "Size Class Output Variable"
	// MPropertyDescription = "Variable name to write size class to. Size class is an integer index into the size list."
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Integer )"
	// MPropertySuppressExpr = "m_nSizeMode != SIZE_CLASSES"
	CUtlString m_OutputSizeClassVariableName;
};
