// name: FUN_0041d404
// address: 0x41d404
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041d404(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  int local_c [2];
  
  FUN_0041f3fc(0x4312c4);
  uVar5 = 0;
  puVar1 = FUN_0041d624(param_2);
  FUN_0041cdc4(param_1,puVar1,uVar5,param_3);
  *param_1 = &PTR_FUN_00431360;
  if ((undefined *)param_1[8] == &DAT_00430db8) goto LAB_0041d5b0;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_0041db8c(local_c,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4a3;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d4c6;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4f6:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d519;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4a3:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d4c6:
  param_1[10] = uVar3;
  uVar3 = 0;
  param_1[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4f6;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d519:
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  puVar4 = (undefined1 *)param_1[0xe];
  for (uVar2 = param_1[10]; uVar2 <= (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0042428c(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)param_1[0xf];
  for (uVar2 = param_1[0xc]; uVar2 <= (uint)param_1[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_00424238(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  FUN_0041dd14(local_c,2);
LAB_0041d5b0:
  *in_FS_OFFSET = local_30;
  return param_1;
}

