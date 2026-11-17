// name: USER32.DLL::GetCursorPos
// address: 0x46078a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046078a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}

