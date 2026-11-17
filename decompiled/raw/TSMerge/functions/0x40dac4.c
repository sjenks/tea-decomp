// name: FUN_0040dac4
// address: 0x40dac4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040dac4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x463c38);
  local_c = 0;
  FUN_00452210((int)local_14,1);
  puVar5 = local_14;
  local_1c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_1c = FUN_0044d2a4(local_24,uVar1,uVar1);
    local_1c = local_1c + 3;
    FUN_004559d0(local_1c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_1c = *(int **)(param_2 + 8);
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = FUN_00451a34((int)local_24,(int)puVar5);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar3 = FUN_0044d2a4(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    FUN_004559d0(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0040dd7d;
    }
    FUN_0044b2cc();
    local_c = 0;
  }
LAB_0040dd7d:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0040de2c;
    }
    FUN_0044b2cc();
  }
LAB_0040de2c:
  *in_FS_OFFSET = local_48;
  return param_1;
}

