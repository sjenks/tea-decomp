// name: FUN_004ae9c4
// address: 0x4ae9c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ae9c4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  FUN_004bf0e0(piVar2);
  if (*(int *)(*param_1 + 0x25) != 0) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))
                      (*param_1,*(int *)((int)param_1 + 0x35),piVar2,param_1);
    if (iVar1 != 0) {
      FUN_004cacbc(*(undefined4 *)(*param_1 + 0x25),iVar1);
    }
  }
  return;
}

