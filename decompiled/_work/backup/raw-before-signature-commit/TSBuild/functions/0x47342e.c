// name: USER32.DLL::ClientToScreen
// address: 0x47342e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047342e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}

