// name: USER32.DLL::FillRect
// address: 0x4e97d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}

