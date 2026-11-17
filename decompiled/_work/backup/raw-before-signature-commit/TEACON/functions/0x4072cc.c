// name: FUN_004072cc
// address: 0x4072cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_004072cc(int *param_1,int param_2)

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
  
  FUN_0041f3fc(0x42ba78);
  local_38 = 8;
  (**(code **)(*param_1 + 0x14))();
  local_2c = local_2c + 1;
  FUN_00416bd0(param_2,(int)local_24);
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00407382;
    }
    local_4c = local_1c + -0xc;
    local_50 = local_1c + -0xc;
    FUN_00414f78();
    local_54 = 0;
    local_58 = local_24;
    local_1c = 0;
    local_84 = 0;
  }
LAB_00407382:
  iVar1 = (**(code **)(*param_1 + 0xc))();
  local_59 = iVar1 != 0;
  if ((bool)local_59) {
    (**(code **)(*param_1 + 0x28))();
    FUN_00421660((undefined1 *)local_f0,(byte *)s_Headwords___d_0042b486);
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = FUN_0041ef80(local_f0);
    FUN_00417320(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    if (0 < local_64) {
      FUN_00421660((undefined1 *)local_f0,(byte *)s_Definitions___d_0042b495);
      uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
      pcVar2 = FUN_0041ef80(local_f0);
      FUN_00417320(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  local_38 = 0x2c;
  iVar1 = FUN_00416e74((int)local_14,(uint *)(param_1 + 0x805));
  local_2c = local_2c + 1;
  local_38 = 0x20;
  if (*(int *)(local_c + -4) != 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = FUN_0041ef80((uint *)s_Description__0042b4a6);
    FUN_00417320(param_2,uVar3,0,0x42b4a6,(uint)pcVar2,0,(uint)pcVar2);
    iVar1 = FUN_0041ab68(param_2,(int)local_14);
  }
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),local_59);
  local_2c = local_2c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00407515;
    }
    local_78 = local_c + -0xc;
    FUN_00414f78();
  }
LAB_00407515:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

