// name: FUN_0045dfbc
// address: 0x45dfbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045dfbc(int *param_1,uint *param_2)

{
  char *pcVar1;
  BOOL BVar2;
  
  if (param_1[0x19] != 2) {
    SetWindowTextA(*(HWND *)(param_1[0x56] + 0xc),(LPCSTR)param_2);
    pcVar1 = FUN_004dc9f4(param_2);
    FUN_004a76a8(param_1[0x56],0x142,0,(int)pcVar1 << 0x10);
    FUN_004cf41c((int)(param_1 + 0x1a6),param_2);
    FUN_0045269c(param_1);
    BVar2 = IsWindowEnabled(*(HWND *)(param_1[0x84] + 0xc));
    if (BVar2 != 0) {
      (**(code **)(param_1[3] + 0x4c))();
    }
  }
  return;
}

