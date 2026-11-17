// name: FUN_00473138
// address: 0x473138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00473138(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  uint local_1d0 [66];
  undefined4 local_c8;
  WINDOWPLACEMENT local_c0;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  int local_80;
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
  
  FUN_004dce64(0x4fee34);
  local_c0.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(*(int *)(param_1 + 4) + 0xc),&local_c0);
  if (BVar1 == 0) goto LAB_004733b8;
  local_50 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_44 = local_44 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_0047322c;
    }
    local_64 = local_14 + -0xc;
    FUN_004cc0bc();
    local_68 = 0;
    local_6c = local_1c;
    local_14 = 0;
    local_c8 = 0;
  }
LAB_0047322c:
  local_50 = 8;
  FUN_0044eee4((undefined1 *)local_1d0);
  local_50 = 0x2c;
  iVar3 = FUN_004cf628((int)local_2c,local_1d0);
  local_44 = local_44 + 1;
  FUN_004cf628((int)local_3c,(uint *)(param_1 + 0x50));
  local_44 = local_44 + 1;
  FUN_0044ec78((int)local_c,(int)local_3c,iVar3);
  local_44 = local_44 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00473318;
    }
    local_80 = local_34 + -0xc;
    FUN_004cc0bc();
    local_84 = 0;
    local_88 = local_3c;
    local_34 = 0;
  }
LAB_00473318:
  local_50 = 8;
  local_44 = local_44 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004733a1;
    }
    local_8c = local_24 + -0xc;
    FUN_004cc0bc();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = 0;
  }
LAB_004733a1:
  local_44 = local_44 + -1;
  FUN_0044e920((int)local_c,2);
  local_50 = 0;
LAB_004733b8:
  (**(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 100))();
  *in_FS_OFFSET = local_60;
  return;
}

