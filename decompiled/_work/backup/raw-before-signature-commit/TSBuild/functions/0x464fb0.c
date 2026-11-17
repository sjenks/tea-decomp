// name: FUN_00464fb0
// address: 0x464fb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_00464fb0(undefined4 *param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2020 [2];
  int local_2018;
  char local_2010;
  uint local_2008 [995];
  undefined4 uStackY_107c;
  undefined4 local_a0 [2];
  int local_98;
  int local_8c;
  undefined1 *local_88;
  int *local_84;
  int *local_80;
  undefined4 *local_7c;
  uint local_78;
  undefined1 *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  undefined1 *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  UINT local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  iVar3 = 2;
  do {
    local_8 = iVar3;
    iVar3 = local_8 + -1;
  } while (local_8 + -1 != 0);
  FUN_00467ba8(0x4881dc);
  uStackY_107c = 0x464fed;
  FUN_0045d4a8(local_a0,param_1 + 2,(int *)&param_3);
  if (param_1[0xb] != local_98) {
    uVar1 = *(undefined4 *)(local_98 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,param_3,(LPSTR)local_2008,0x1f58);
  if (iVar3 == 0) goto LAB_00465256;
  local_40 = 0x14;
  iVar4 = FUN_00459d78((int)local_14,local_2008);
  local_34 = local_34 + 1;
  local_2c[0] = param_3;
  local_5c = 0;
  local_1c = (int *)0x0;
  local_40 = 0x20;
  iVar3 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_70 = FUN_00459f00(local_24,uVar2,uVar2);
    local_74 = local_24;
    local_80 = local_70 + 3;
    local_7c = *(undefined4 **)(iVar4 + 8);
    local_78 = uVar2;
    local_6c = local_80;
    local_1c = local_80;
    FUN_00467580(local_80,local_7c,uVar2);
  }
  else {
    local_60 = *(int **)(iVar4 + 8);
    local_64 = local_24;
    local_68 = local_60 + -3;
    local_1c = local_60;
    if (local_68 != &DAT_00485bcc) {
      *local_68 = *local_68 + 1;
    }
  }
  local_40 = 0x14;
  local_34 = local_34 + 2;
  FUN_0046286c(local_2020,param_1 + 2,local_2c);
  local_34 = local_34 + -2;
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar5 = local_1c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_004651b3;
    }
    local_84 = local_1c + -3;
    FUN_0045680c();
    local_88 = local_24;
    local_1c = (int *)0x0;
  }
LAB_004651b3:
  local_34 = local_34 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0046522c;
    }
    local_8c = local_c + -0xc;
    FUN_0045680c();
  }
LAB_0046522c:
  if (local_2010 != '\0') {
    uVar1 = *(undefined4 *)(local_2018 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
LAB_00465256:
  *in_FS_OFFSET = local_50;
  return param_4;
}

