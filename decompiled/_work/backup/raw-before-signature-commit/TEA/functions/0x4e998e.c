// name: USER32.DLL::ScreenToClient
// address: 0x4e998e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}

