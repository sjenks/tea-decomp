// name: USER32.DLL::GetClassInfoA
// address: 0x460778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}

