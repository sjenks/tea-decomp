// name: FUN_00416d80
// address: 0x416d80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416d80(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00416c78(param_1);
    piVar1 = param_1;
    FUN_00416ca4(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_00416cfc(param_1);
    FUN_00416d28(param_1);
    FUN_00416d54(param_1);
  }
  return;
}

