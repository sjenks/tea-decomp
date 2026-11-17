// name: USER32.DLL::GetCursorPos
// address: 0x4e9802
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}

