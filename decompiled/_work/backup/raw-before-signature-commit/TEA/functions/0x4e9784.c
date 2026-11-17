// name: USER32.DLL::DrawFrameControl
// address: 0x4e9784
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFrameControl(param_1,param_2,param_3,param_4);
  return BVar1;
}

