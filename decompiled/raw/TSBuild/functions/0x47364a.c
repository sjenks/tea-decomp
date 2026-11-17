// name: USER32.DLL::RegisterClassA
// address: 0x47364a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047364a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}

