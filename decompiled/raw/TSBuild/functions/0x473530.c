// name: USER32.DLL::GetMenu
// address: 0x473530
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}

