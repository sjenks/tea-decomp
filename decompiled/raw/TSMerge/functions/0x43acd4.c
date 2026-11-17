// name: FUN_0043acd4
// address: 0x43acd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043acd4(int *param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  
  bVar1 = FUN_0042cd2c(*param_1);
  if (((bVar1) && (BVar3 = IsWindowEnabled(*(HWND *)(*param_1 + 0xc)), BVar3 != 0)) &&
     (cVar2 = FUN_0043b3c8(param_1,'\x01'), cVar2 == '\0')) {
    DAT_0046d2ac = param_1;
    SetFocus(*(HWND *)(*param_1 + 0xc));
    bVar1 = false;
  }
  return bVar1;
}

