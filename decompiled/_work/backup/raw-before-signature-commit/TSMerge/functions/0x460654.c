// name: GDI32.DLL::SetBkMode
// address: 0x460654
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}

