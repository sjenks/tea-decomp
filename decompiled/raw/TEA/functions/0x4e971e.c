// name: USER32.DLL::DdeConnect
// address: 0x4e971e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HCONV __stdcall DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e971e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}

