// name: FUN_0040c364
// address: 0x40c364
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_0040c364(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_f0 [27];
  undefined4 local_84;
  int local_78;
  int local_64;
  undefined1 local_59;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ebf64);
  local_38 = 8;
  (**(code **)(*param_1 + 0x14))();
  local_2c = local_2c + 1;
  FUN_004cf384(param_2,(int)local_24);
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c41a;
    }
    local_4c = local_1c + -0xc;
    local_50 = local_1c + -0xc;
    FUN_004cc0bc();
    local_54 = 0;
    local_58 = local_24;
    local_1c = 0;
    local_84 = 0;
  }
LAB_0040c41a:
  iVar1 = (**(code **)(*param_1 + 0xc))();
  local_59 = iVar1 != 0;
  if ((bool)local_59) {
    (**(code **)(*param_1 + 0x28))();
    FUN_004e0344((undefined1 *)local_f0,(byte *)s_Headwords___d_004eb457);
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = FUN_004dc9f4(local_f0);
    FUN_004cfad4(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    if (0 < local_64) {
      FUN_004e0344((undefined1 *)local_f0,(byte *)s_Definitions___d_004eb466);
      uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
      pcVar2 = FUN_004dc9f4(local_f0);
      FUN_004cfad4(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  local_38 = 0x2c;
  iVar1 = FUN_004cf628((int)local_14,(uint *)(param_1 + 0x805));
  local_2c = local_2c + 1;
  local_38 = 0x20;
  if (*(int *)(local_c + -4) != 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = FUN_004dc9f4((uint *)s_Description__004eb477);
    FUN_004cfad4(param_2,uVar3,0,0x4eb477,(uint)pcVar2,0,(uint)pcVar2);
    iVar1 = FUN_004d573c(param_2,(int)local_14);
  }
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),local_59);
  local_2c = local_2c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c5ad;
    }
    local_78 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_0040c5ad:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

