// name: GDI32.DLL::GetClipRgn
// address: 0x4e9586
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}

