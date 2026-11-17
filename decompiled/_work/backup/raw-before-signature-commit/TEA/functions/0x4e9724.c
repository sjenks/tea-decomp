// name: USER32.DLL::DdeCreateStringHandleA
// address: 0x4e9724
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HSZ __stdcall DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}

