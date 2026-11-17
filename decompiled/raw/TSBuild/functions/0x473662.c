// name: USER32.DLL::ScreenToClient
// address: 0x473662
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}

