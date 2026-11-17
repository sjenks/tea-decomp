// name: FUN_00445e68
// address: 0x445e68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00445e68(int *param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  
  bVar1 = FUN_00437ec0(*param_1);
  if (((bVar1) && (BVar3 = IsWindowEnabled(*(HWND *)(*param_1 + 0xc)), BVar3 != 0)) &&
     (cVar2 = FUN_0044655c(param_1,'\x01'), cVar2 == '\0')) {
    DAT_00481088 = param_1;
    SetFocus(*(HWND *)(*param_1 + 0xc));
    bVar1 = false;
  }
  return bVar1;
}

