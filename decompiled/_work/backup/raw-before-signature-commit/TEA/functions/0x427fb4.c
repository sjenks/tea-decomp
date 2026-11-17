// name: FUN_00427fb4
// address: 0x427fb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427fb4(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = FUN_004dd744((int)*(int **)(*(int *)param_1[0x25] + 0x44),
                        **(int **)(*(int *)param_1[0x25] + 0x44),(int *)&DAT_00428068,
                        (int *)&DAT_004280c0,1);
  FUN_0044f8cc((int)piVar1,0);
  if (param_2 != 1) {
    (**(code **)(*piVar1 + 0x14))();
    (**(code **)(*piVar1 + 0x2c))();
  }
  FUN_004aeeec(param_1,param_2,param_3);
  FUN_0044f8cc((int)piVar1,1);
  if ((param_2 != 1) && (param_1[0x1a] != 0)) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}

