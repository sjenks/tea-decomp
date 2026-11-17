// name: USER32.DLL::DdeClientTransaction
// address: 0x4e9718
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDDEDATA __stdcall
DdeClientTransaction
          (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,DWORD dwTimeout,
          LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}

