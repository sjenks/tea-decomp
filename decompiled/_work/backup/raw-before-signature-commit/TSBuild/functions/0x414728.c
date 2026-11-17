// name: FUN_00414728
// address: 0x414728
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414728(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    FUN_00414784(param_1,param_2,param_3);
  }
  else {
    FUN_00414784(param_1,param_1 + 0x40,param_3);
    FUN_00414868(param_1 + 0x40,param_2);
  }
  return;
}

