// name: GDI32.DLL::SetMapMode
// address: 0x4e9658
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}

