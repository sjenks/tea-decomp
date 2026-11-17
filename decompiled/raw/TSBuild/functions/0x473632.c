// name: USER32.DLL::OpenClipboard
// address: 0x473632
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}

