class CTestPulseIO : public CLogicalEntity
{
	CEntityIOOutput m_OnVariantVoid;
	CEntityOutputTemplate< bool > m_OnVariantBool;
	CEntityOutputTemplate< int32 > m_OnVariantInt;
	CEntityOutputTemplate< float32 > m_OnVariantFloat;
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnVariantString;
	CEntityOutputTemplate< Color > m_OnVariantColor;
	CEntityOutputTemplate< Vector > m_OnVariantVector;
	bool m_bAllowEmptyInputs;
	CTestPulseIOComponent_Derived m_TestComponent;
	CEntityIOOutput m_OnInternalTestVoid;
	CEntityOutputTemplate< bool > m_OnInternalTestBool;
	CEntityOutputTemplate< int32 > m_OnInternalTestInt;
	CEntityOutputTemplate< float32 > m_OnInternalTestFloat;
	CEntityOutputTemplate< CUtlSymbolLarge > m_OnInternalTestString;
	CEntityOutputTemplate< Color > m_OnInternalTestColor;
	CEntityOutputTemplate< Vector > m_OnInternalTestVector;
	CEntityOutputTemplate< CEntityNameString > m_OnInternalTestEntityName;
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnInternalTestEntityHandle;
	CEntityOutputTemplate< TestInputOutputCombinationsEnum_t > m_OnInternalTestSchemaEnum;
	CEntityOutputTemplate< CTestPulseIO::FloatStringArgs_t > m_OnInternalTestFloatString;
	CEntityOutputTemplate< CTestPulseIO::EntityNameStringArgs_t > m_OnInternalTestEntityNameString;
	CEntityOutputTemplate< CTestPulseIO::EntityHandleIntArgs_t > m_OnInternalTestEntityHandleInt;
	CEntityOutputTemplate< CTestPulseIO::ThreeStringArgs_t > m_OnInternalTestStringStringString;
};
