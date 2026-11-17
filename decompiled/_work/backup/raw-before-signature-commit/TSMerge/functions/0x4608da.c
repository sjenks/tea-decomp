// name: USER32.DLL::ReleaseDC
// address: 0x4608da
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

