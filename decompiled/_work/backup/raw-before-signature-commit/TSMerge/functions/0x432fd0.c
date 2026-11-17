// name: FUN_00432fd0
// address: 0x432fd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  FUN_0044305c(piVar2);
  if (*(int *)(*param_1 + 0x25) != 0) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))
                      (*param_1,*(int *)((int)param_1 + 0x35),piVar2,param_1);
    if (iVar1 != 0) {
      FUN_0044aae4(*(undefined4 *)(*param_1 + 0x25),iVar1);
    }
  }
  return;
}

