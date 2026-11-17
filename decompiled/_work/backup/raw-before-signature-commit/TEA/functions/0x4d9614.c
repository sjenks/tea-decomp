// name: FUN_004d9614
// address: 0x4d9614
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004d9614(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x516214);
  *param_1 = &PTR_FUN_0051587c;
  param_1[1] = param_4;
  *param_1 = &PTR_FUN_0051588c;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &PTR_FUN_00501320;
  *param_1 = &PTR_FUN_005162c0;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00515e04;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_004d96cc;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_004d96f2;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_004d9795:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d97bb;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_004d96cc:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d96f2:
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar1 = FUN_004cc180();
  param_1[0xe] = uVar1;
  puVar2 = (undefined1 *)param_1[0xe];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if ((((0x60 < uVar4) && (uVar4 < 0x7b)) &&
        ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0)) &&
       ((*(byte *)(param_1[8] + (uVar4 - 0x20 & 0xff) * 4) & 8) != 0)) {
      uVar3 = uVar4 - 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0) {
      if (uVar4 < 0xff) goto LAB_004d9795;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_004d97bb:
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar1 = FUN_004cc180();
  param_1[0xf] = uVar1;
  puVar2 = (undefined1 *)param_1[0xf];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if (((0x40 < uVar4) && (uVar4 < 0x5b)) &&
       (((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0 &&
        ((*(byte *)(param_1[8] + (uVar4 + 0x20 & 0xff) * 4) & 0x10) != 0)))) {
      uVar3 = uVar4 + 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

