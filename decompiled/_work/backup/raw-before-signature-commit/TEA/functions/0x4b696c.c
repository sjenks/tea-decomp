// name: FUN_004b696c
// address: 0x4b696c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004b696c(int *param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  
  bVar1 = FUN_004a7230(*param_1);
  if (((bVar1) && (BVar3 = IsWindowEnabled(*(HWND *)(*param_1 + 0xc)), BVar3 != 0)) &&
     (cVar2 = FUN_004b7060(param_1,'\x01'), cVar2 == '\0')) {
    DAT_0050dfc8 = param_1;
    SetFocus(*(HWND *)(*param_1 + 0xc));
    bVar1 = false;
  }
  return bVar1;
}

