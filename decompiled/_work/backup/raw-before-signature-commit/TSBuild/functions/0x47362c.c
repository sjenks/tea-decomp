// name: USER32.DLL::MsgWaitForMultipleObjects
// address: 0x47362c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
MsgWaitForMultipleObjects
          (DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}

