enum PlayerConnectedState : uint32_t
{
	NeverConnected = -1,
	Connected = 0,
	Connecting = 1,
	Reconnecting = 2,
	Disconnecting = 3,
	Disconnected = 4,
	Reserved = 5,
};
