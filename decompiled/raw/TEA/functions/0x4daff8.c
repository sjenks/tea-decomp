// name: FUN_004daff8
// address: 0x4daff8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004daff8(void)

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
  
  FUN_004dce64(0x5168e4);
  if (DAT_0051bc08 == (undefined4 *)0x0) goto LAB_004db1ec;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_0041e688;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_004dc320(local_18c,PTR_s_locale___initid___called_twice_005165c8);
  FUN_004cf628((int)local_2c,local_5c);
  local_3c = local_3c + 2;
  local_1c[0] = &PTR_FUN_004ecaac;
  local_68 = 0;
  local_c = (int *)0x0;
  local_48 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = FUN_004cf7b0(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    FUN_004dc7d4(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_00513d58) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004db1d5;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    FUN_004cc0bc();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_004db1d5:
  local_48 = 8;
  FUN_004e7cc4((uint *)&DAT_004113dc,local_1c,uVar4,pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_004db1ec:
  local_30 = (undefined4 *)FUN_004cc0f0();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_004dab5c(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_0051bc00 = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_004cf41c((int)(local_30 + 8),(uint *)&DAT_00516767);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_004cf384(DAT_0051bc00[2] + iVar2 * 0x10,(int)(DAT_0051bc00 + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)FUN_004cc0f0();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_004dab5c(local_34,10,2);
  }
  DAT_0051bc04 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  DAT_0051bc08 = DAT_0051bc00;
  *in_FS_OFFSET = local_58;
  return;
}

