// name: GDI32.DLL::GetCurrentPositionEx
// address: 0x4e9592
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}

