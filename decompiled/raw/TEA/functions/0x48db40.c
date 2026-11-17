// name: FUN_0048db40
// address: 0x48db40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048db40(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_0048da38(param_1);
    piVar1 = param_1;
    FUN_0048da64(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_0048dabc(param_1);
    FUN_0048dae8(param_1);
    FUN_0048db14(param_1);
  }
  return;
}

