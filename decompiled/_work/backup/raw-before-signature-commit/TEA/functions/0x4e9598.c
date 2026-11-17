// name: GDI32.DLL::GetDeviceCaps
// address: 0x4e9598
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}

