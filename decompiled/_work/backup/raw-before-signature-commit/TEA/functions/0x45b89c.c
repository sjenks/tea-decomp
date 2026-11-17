// name: FUN_0045b89c
// address: 0x45b89c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0045b89c(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  uint local_c4 [5];
  LONG local_b0 [2];
  int local_a8;
  int local_a4;
  undefined4 local_98;
  undefined1 *local_90;
  int local_8c;
  undefined1 *local_88;
  int local_84;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f9994);
  local_50 = 0x14;
  iVar6 = 0;
  iVar5 = 1;
  FUN_004649b0((int)local_3c);
  local_44 = local_44 + 1;
  FUN_0044e83c(local_c,(int)local_3c,iVar5,iVar6);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b959;
    }
    local_64 = local_34 + -0xc;
    FUN_004cc0bc();
    local_68 = 0;
    local_6c = local_3c;
    local_34 = 0;
    local_98 = 0;
  }
LAB_0045b959:
  local_50 = 8;
  FUN_00459150(local_b0,param_1);
  if (param_1[0x29] != 0) {
    local_a4 = local_a8;
  }
  local_70 = local_a4 + param_1[0x1ed];
  local_50 = 0x2c;
  FUN_004cf628((int)local_1c,(uint *)s_Panes_004f7699);
  local_44 = local_44 + 1;
  local_50 = 8;
  FUN_004e0344((undefined1 *)local_c4,&DAT_004f76b2);
  uVar4 = *(uint *)(local_14 + -4);
  pcVar2 = FUN_004dc9f4(local_c4);
  FUN_004cfad4((int)local_1c,uVar4,0,(uint)local_c4,(uint)pcVar2,0,(uint)pcVar2);
  FUN_004e0344((undefined1 *)local_c4,&DAT_004f75f3);
  local_50 = 0x38;
  FUN_004cf628((int)local_2c,local_c4);
  local_44 = local_44 + 1;
  local_50 = 8;
  uVar4 = 0;
  while( true ) {
    iVar5 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uint)(iVar5 >> 2) <= uVar4) break;
    FUN_004e0344((undefined1 *)local_c4,&DAT_004f782b);
    uVar1 = *(uint *)(local_24 + -4);
    pcVar2 = FUN_004dc9f4(local_c4);
    FUN_004cfad4((int)local_2c,uVar1,0,(uint)local_c4,(uint)pcVar2,0,(uint)pcVar2);
    uVar4 = uVar4 + 1;
  }
  FUN_0044ec78((int)local_c,(int)local_1c,(int)local_2c);
  local_44 = local_44 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045bb99;
    }
    local_84 = local_24 + -0xc;
    FUN_004cc0bc();
    local_88 = local_2c;
    local_24 = 0;
  }
LAB_0045bb99:
  local_50 = 8;
  local_44 = local_44 + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045bc18;
    }
    local_8c = local_14 + -0xc;
    FUN_004cc0bc();
    local_90 = local_1c;
    local_14 = 0;
  }
LAB_0045bc18:
  local_44 = local_44 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_60;
  return;
}

