// name: FUN_00463f68
// address: 0x463f68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 * __cdecl FUN_00463f68(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  uint *puVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  undefined4 uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char local_188 [240];
  undefined1 *local_98;
  undefined4 local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  undefined1 *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  int *local_14;
  int local_c;
  int local_8;
  
  bVar12 = 0;
  FUN_00467ba8(0x487aa0);
  local_48 = 8;
  FUN_00465be4(&local_c,param_1,0x10);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (local_8 != 0) goto LAB_0046416e;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 1;
  puVar14 = &LAB_004642ac;
  uVar13 = 0;
  local_48 = 0x2c;
  local_5c = (uint *)FUN_00467104(local_188,5);
  FUN_00459d78((int)local_34,local_5c);
  local_3c = local_3c + 2;
  local_24[0] = &PTR_FUN_00474e2c;
  local_68 = 0;
  local_14 = (int *)0x0;
  local_48 = 0x38;
  if (local_2c[-3] == -1 || local_2c[-3] + 1 < 0) {
    uVar6 = local_2c[-1];
    local_78 = FUN_00459f00(local_1c,uVar6,uVar6);
    local_7c = local_1c;
    local_88 = local_78 + 3;
    local_84 = local_2c;
    local_80 = uVar6;
    local_74 = local_88;
    local_14 = local_88;
    FUN_00467580(local_88,local_2c,uVar6);
  }
  else {
    local_70 = local_1c;
    local_6c = local_2c;
    local_14 = local_2c;
    piVar9 = local_2c + -3;
    if (piVar9 != &DAT_00485bcc) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_48 = 0x2c;
  local_24[0] = &PTR_FUN_00487b1c;
  local_3c = local_3c + 2;
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar9 = local_2c + -3;
      if (piVar9 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00464157;
    }
    local_8c = local_2c + -3;
    local_90 = local_2c + -3;
    FUN_0045680c();
    local_94 = 0;
    local_98 = local_34;
    local_2c = (int *)0x0;
  }
LAB_00464157:
  local_48 = 0x20;
  FUN_00471ae8((uint *)&DAT_00464250,local_24,uVar13,puVar14,uVar15,uVar16,uVar17,uVar18);
LAB_0046416e:
  ppuVar3 = FUN_0046b198();
  local_48 = 0x14;
  FUN_004677a0((uint *)ppuVar3[2]);
  FUN_004677a0((uint *)&DAT_00487a3c);
  FUN_004677a0((uint *)s_false_00487a41);
  puVar4 = (undefined1 *)FUN_004568d0();
  *puVar4 = 1;
  puVar8 = (uint *)(puVar4 + 0x10);
  puVar4[1] = **ppuVar3;
  puVar4[2] = *ppuVar3[1];
  uVar15 = 0xffffffff;
  pcVar5 = ppuVar3[2];
  do {
    pcVar10 = pcVar5;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  puVar7 = (uint *)(pcVar10 + -uVar15);
  puVar11 = puVar8;
  for (uVar6 = uVar15 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(char *)puVar11 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
    puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
  }
  *(uint **)(puVar4 + 4) = puVar8;
  pcVar5 = FUN_004677a0(puVar8);
  puVar8 = (uint *)((int)puVar8 + (int)(pcVar5 + 1));
  *puVar8 = DAT_00487a47;
  *(undefined1 *)(puVar8 + (uint)bVar12 * -2 + 1) = (&DAT_00487a4b)[(uint)bVar12 * -8];
  *(uint **)(puVar4 + 8) = puVar8;
  pcVar5 = FUN_004677a0(puVar8);
  pcVar5 = (char *)((int)puVar8 + (int)(pcVar5 + 1));
  *(undefined4 *)pcVar5 = s_false_00487a4c._0_4_;
  *(undefined2 *)(pcVar5 + (uint)bVar12 * -8 + 4) =
       *(undefined2 *)(s_false_00487a4c + (uint)bVar12 * -8 + 4);
  *(char **)(puVar4 + 0xc) = pcVar5;
  local_3c = local_3c + -1;
  FUN_00465d6c(&local_c,2);
  *in_FS_OFFSET = local_58;
  return puVar4;
}

