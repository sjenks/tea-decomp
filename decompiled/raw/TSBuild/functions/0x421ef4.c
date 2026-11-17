// name: FUN_00421ef4
// address: 0x421ef4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421ef4(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00421dec(param_1);
    piVar1 = param_1;
    FUN_00421e18(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_00421e70(param_1);
    FUN_00421e9c(param_1);
    FUN_00421ec8(param_1);
  }
  return;
}

