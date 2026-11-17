// name: FUN_00403478
// address: 0x403478
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00403478(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0xb8) + 8))();
  if (iVar1 < 1) {
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    *param_4 = 1;
    *param_5 = 0x7fffffff;
  }
  return;
}

