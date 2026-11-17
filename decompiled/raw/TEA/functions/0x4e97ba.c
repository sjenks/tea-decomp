// name: USER32.DLL::EndDeferWindowPos
// address: 0x4e97ba
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EndDeferWindowPos(HDWP hWinPosInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDeferWindowPos(hWinPosInfo);
  return BVar1;
}

