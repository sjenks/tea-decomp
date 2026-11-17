// name: FUN_004400a0
// address: 0x4400a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004400a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000024;
  undefined4 local_54 [4];
  undefined4 local_44 [6];
  int local_2c;
  int local_1c;
  undefined4 local_14 [4];
  
  local_14[2] = *(undefined4 *)(param_2 + 0x24);
  iVar3 = *(int *)(param_2 + 0x24);
  local_1c = *(int *)(iVar3 + 8);
  if (((local_1c == param_5) && (local_2c = iVar3, iVar3 == in_stack_00000024)) &&
     (*(int *)(param_2 + 0x28) != 0)) {
    FUN_004401a4(param_2,*(int *)(iVar3 + 4));
    iVar3 = *(int *)(param_2 + 0x24);
    *(int *)(iVar3 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(int *)(iVar3 + 0xc) = iVar3;
    *(undefined4 *)(param_2 + 0x28) = 0;
    local_44[2] = *(undefined4 *)(param_2 + 0x24);
    puVar4 = local_44;
    puVar5 = local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    while (iVar3 = param_5, uVar2 = param_4, uVar1 = param_3, param_5 != in_stack_00000024) {
      FUN_0043ff6c((int)&param_3);
      FUN_004402dc(local_54,param_2,uVar1,uVar2,iVar3);
      puVar4 = local_54;
      puVar5 = local_14;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

