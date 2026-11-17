// name: FUN_004643c0
// address: 0x4643c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004643c0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x487f48);
  *param_1 = &PTR_FUN_00487554;
  param_1[1] = param_4;
  *param_1 = &PTR_FUN_00487564;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &PTR_FUN_00478df4;
  *param_1 = &PTR_FUN_00487ff4;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00487b38;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_00464478;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_0046449e;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00464541:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00464567;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00464478:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0046449e:
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar1 = FUN_004568d0();
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
      if (uVar4 < 0xff) goto LAB_00464541;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_00464567:
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar1 = FUN_004568d0();
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

