// name: USER32.DLL::GetMenu
// address: 0x4607b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004607b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}

