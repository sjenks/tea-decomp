// name: FUN_0041dd4c
// address: 0x41dd4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041dd4c(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_18c [240];
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_0041f3fc(0x4316a8);
  if (DAT_004348a8 == (undefined4 *)0x0) goto LAB_0041df40;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_004133f0;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_0041ea4c(local_18c,PTR_s_locale___initid___called_twice_0043138c);
  FUN_00416e74((int)local_2c,local_5c);
  local_3c = local_3c + 2;
  local_1c[0] = &PTR_FUN_0042bc04;
  local_68 = 0;
  local_c = (int *)0x0;
  local_48 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = FUN_00416ffc(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    FUN_0041eddc(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_0042fab4) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041df29;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    FUN_00414f78();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0041df29:
  local_48 = 8;
  FUN_004280a0((uint *)&DAT_004079c4,local_1c,uVar4,pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_0041df40:
  local_30 = (undefined4 *)FUN_00414fac();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_0041d8b0(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_004348a0 = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_00416c68((int)(local_30 + 8),(uint *)&DAT_0043152b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_00416bd0(DAT_004348a0[2] + iVar2 * 0x10,(int)(DAT_004348a0 + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)FUN_00414fac();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_0041d8b0(local_34,10,2);
  }
  DAT_004348a4 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  DAT_004348a8 = DAT_004348a0;
  *in_FS_OFFSET = local_58;
  return;
}

