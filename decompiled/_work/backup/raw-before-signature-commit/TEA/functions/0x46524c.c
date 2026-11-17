// name: FUN_0046524c
// address: 0x46524c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046533c) */
/* WARNING: Removing unreachable block (ram,0x0046537f) */
/* WARNING: Removing unreachable block (ram,0x004652c3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffc4c : 0x004652d1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_0046524c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  uint *puVar6;
  undefined4 local_3b0;
  undefined1 local_38c [8];
  int local_384;
  int local_37c [206];
  undefined1 local_44 [8];
  undefined *local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_c;
  
  FUN_004dce64(0x4fbf74);
  if ((param_3 == 0x1d42) || (param_3 == 0x3160)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    local_20 = 0;
    local_1c = 0;
    local_c = 0;
    local_24 = 8;
    FUN_00466e98(param_1,param_4,(int)&local_24);
    iVar4 = local_1c - local_20;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    if (iVar4 >> 7 != 0) {
      local_2c = &DAT_00513d64;
      local_3c = &DAT_00513d64;
      if (param_6 != 0) {
        FUN_004cf384((int)local_34,param_6);
      }
      if (param_5 != 0) {
        FUN_004cf384((int)local_44,param_5);
      }
      piVar1 = FUN_0045e25c(*(undefined4 **)(param_1 + 0x10),(uint)(param_3 == 0x3160));
      FUN_004733d8(piVar1,(int)&local_24,param_4,(int)local_44,(int)local_34,0,0,-1);
      uVar3 = (uint)(param_3 == 0x3160);
      if (local_3c != (undefined *)0x0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          piVar1 = (int *)(local_3c + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1 + 1;
          }
          if (iVar5 != 0) goto LAB_0046549b;
        }
        FUN_004cc0bc();
        local_3c = (undefined *)0x0;
      }
LAB_0046549b:
      if (local_2c != (undefined *)0x0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar1 = (int *)(local_2c + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1 + 1;
          }
          if (iVar5 != 0) goto LAB_00465531;
        }
        FUN_004cc0bc();
        local_2c = (undefined *)0x0;
      }
LAB_00465531:
      FUN_0040b62c(&local_24,local_20,local_1c);
      FUN_004cc0bc();
      *in_FS_OFFSET = local_3b0;
      return uVar3;
    }
    FUN_0040b62c(&local_24,local_20,local_1c);
    FUN_004cc0bc();
  }
  if (iVar5 == 0) {
    piVar1 = (int *)FUN_00422fc4(param_1);
    iVar4 = FUN_00423c2c(piVar1);
    if (iVar4 < 1) goto LAB_004655cd;
  }
  else {
LAB_004655cd:
    FUN_0045dbd8(*(int **)(param_1 + 0x10),param_2);
    piVar1 = FUN_00475a74(local_37c,0,param_2,param_1,param_4,iVar5);
    iVar5 = (**(code **)(piVar1[3] + 0x14))();
    FUN_00475d20(local_37c,2);
    FUN_0045dbd8(*(int **)(param_1 + 0x10),param_2);
    if (iVar5 != 1) {
      *in_FS_OFFSET = local_3b0;
      return 0;
    }
    param_3 = 0x31a6;
  }
  puVar6 = *(uint **)(param_4 + 8);
  puVar2 = FUN_00422fc4(param_1);
  uVar3 = FUN_00423078((int)puVar2,puVar6,param_3);
  if (uVar3 == 0) {
    FUN_00464a94((int)local_38c,param_1,0x18ec);
    (**(code **)(*(int *)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x1b) + 0x30))();
    if (local_384 != 0) {
      if (*(int *)(local_384 + -0xc) != -1) {
        piVar1 = (int *)(local_384 + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1 + 1;
        }
        if (iVar5 != 0) goto LAB_0046577d;
      }
      FUN_004cc0bc();
    }
  }
LAB_0046577d:
  *in_FS_OFFSET = local_3b0;
  return 0;
}

