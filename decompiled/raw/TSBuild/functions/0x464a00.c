// name: FUN_00464a00
// address: 0x464a00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00464a00(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  int local_c [2];
  
  FUN_00467ba8(0x488054);
  uVar5 = 0;
  puVar1 = FUN_00464c20(param_2);
  FUN_004643c0(param_1,puVar1,uVar5,param_3);
  *param_1 = &PTR_FUN_004880f0;
  if ((undefined *)param_1[8] == &DAT_00487b38) goto LAB_00464bac;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_00465be4(local_c,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_00464a9f;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_00464ac2;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_00464af2:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00464b15;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_00464a9f:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_00464ac2:
  param_1[10] = uVar3;
  uVar3 = 0;
  param_1[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_00464af2;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_00464b15:
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  puVar4 = (undefined1 *)param_1[0xe];
  for (uVar2 = param_1[10]; uVar2 <= (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0046d1fc(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)param_1[0xf];
  for (uVar2 = param_1[0xc]; uVar2 <= (uint)param_1[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_0046d1a8(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  FUN_00465d6c(local_c,2);
LAB_00464bac:
  *in_FS_OFFSET = local_30;
  return param_1;
}

