// MGetKV3ClassDefaults = {
//	"_class": "CMixSteamAudioDirect",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_bApplyDistanceAttenuation": false,
//	"m_bApplyAirAbsorption": false,
//	"m_bApplyDirectivity": false,
//	"m_bApplyOcclusion": false,
//	"m_bApplyTransmission": false,
//	"m_flDipoleWeight": 1.000000,
//	"m_flDipolePower": 1.000000,
//	"m_flOcclusion": 1.000000,
//	"m_flTransmissionLow": 0.000000,
//	"m_flTransmissionMid": 0.000000,
//	"m_flTransmissionHigh": 0.000000,
//	"m_vecTransmission":
//	[
//	]
//}
// MPropertyFriendlyName = "VMix Steam Audio Direct Node"
// MPropertyDescription = "Applies steam audio model for direct audio.  This includes modeling the loss due to transmission in air, directivity and occlusion effects."
class CMixSteamAudioDirect : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Apply Distance Attenuation"
	bool m_bApplyDistanceAttenuation;
	// MPropertyFriendlyName = "Apply Air Absorption"
	bool m_bApplyAirAbsorption;
	// MPropertyFriendlyName = "Apply Directivity"
	bool m_bApplyDirectivity;
	// MPropertyFriendlyName = "Apply Occlusion"
	bool m_bApplyOcclusion;
	// MPropertyFriendlyName = "Apply Transmission"
	bool m_bApplyTransmission;
	// MPropertyFriendlyName = "Dipole Weight"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flDipoleWeight;
	// MPropertyFriendlyName = "Dipole Power"
	// MPropertyAttributeRange = "0.0 4.0"
	float32 m_flDipolePower;
	// MPropertyFriendlyName = "Occlusion Value"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flOcclusion;
	// MPropertyFriendlyName = "Transmission Value (Low Freq)"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flTransmissionLow;
	// MPropertyFriendlyName = "Transmission Value (Mid Freq)"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flTransmissionMid;
	// MPropertyFriendlyName = "Transmission Value (High Freq)"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flTransmissionHigh;
	// MPropertyFriendlyName = "Transmission Values"
	// MPropertyAttributeRange = "0.0 1.0"
	CUtlVector< float32 > m_vecTransmission;
};
