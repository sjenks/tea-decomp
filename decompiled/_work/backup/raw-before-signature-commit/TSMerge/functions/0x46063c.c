// name: GDI32.DLL::SelectClipRgn
// address: 0x46063c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}

