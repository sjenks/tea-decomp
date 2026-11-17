// name: FUN_0041e82c
// address: 0x41e82c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0041e82c(int *param_1,int param_2)

{
  uint uVar1;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == 0x100)) &&
     ((*(int *)(param_2 + 8) == 0xd || (*(int *)(param_2 + 8) == 0x20)))) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x80))();
    return 4;
  }
  uVar1 = FUN_004b6408(param_1);
  return uVar1;
}

