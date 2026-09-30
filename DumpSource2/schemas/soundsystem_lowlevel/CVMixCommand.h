class CVMixCommand
{
	// MKV3TransferName = "command"
	VMixGraphCommandID_t m_nCommand; // = "CMD_INVALID"
	// MKV3TransferName = "paramName"
	uint32 m_nParameterNameHash;
	// MKV3TransferName = "outputSubmix"
	int32 m_nOutputSubmix; // = -1
	// MKV3TransferName = "inputSubmix0"
	int32 m_nInputSubmix0; // = -1
	// MKV3TransferName = "inputSubmix1"
	int32 m_nInputSubmix1; // = -1
	// MKV3TransferName = "processor"
	int32 m_nProcessor; // = -1
	// MKV3TransferName = "inputValue0"
	int32 m_nInputValue0; // = -1
	// MKV3TransferName = "inputValue1"
	int32 m_nInputValue1; // = -1
};
