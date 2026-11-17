// name: FUN_00430180
// address: 0x430180
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00430180(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_14 [4];
  
  if (param_2 != param_1) {
    FUN_0042a474(local_14,(int)param_1,in_stack_ffffffc0,in_stack_ffffffc4,*(int *)(param_1[9] + 8))
    ;
    puVar2 = FUN_00430224(param_1,*(undefined4 **)(param_2[9] + 4),(undefined4 *)param_1[9]);
    iVar1 = param_1[9];
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if (*(int *)(iVar1 + 4) == 0) {
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 0xc) = iVar1;
    }
    else {
      uVar3 = FUN_0042ae80(*(int *)(param_1[9] + 4));
      iVar1 = param_1[9];
      *(undefined4 *)(iVar1 + 8) = uVar3;
      uVar3 = FUN_0042aea0(*(int *)(iVar1 + 4));
      *(undefined4 *)(param_1[9] + 0xc) = uVar3;
    }
    param_1[10] = param_2[10];
  }
  return param_1;
}

