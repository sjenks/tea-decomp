// name: FUN_00416a78
// address: 0x416a78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00416a78(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_5c [3];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4edd20);
  local_40 = 8;
  FUN_004cf628((int)local_14,*(uint **)(param_1 + 0x50));
  local_34 = local_34 + 1;
  local_40 = 0x14;
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = FUN_004dc9f4(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  local_5c[0] = param_3;
  local_40 = 0x20;
  iVar5 = 0;
  iVar4 = 0;
  FUN_004649b0((int)local_2c);
  local_34 = local_34 + 1;
  FUN_0044e83c(local_1c,(int)local_2c,iVar4,iVar5);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00416b7b;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_00416b7b:
  local_40 = 0x14;
  FUN_0044e9c0((int)local_1c,(int)local_14,local_5c);
  local_34 = local_34 + -1;
  uVar6 = local_5c[0];
  FUN_0044e920((int)local_1c,2);
  local_34 = local_34 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00416c19;
    }
    FUN_004cc0bc();
  }
LAB_00416c19:
  *in_FS_OFFSET = local_50;
  return uVar6;
}

