// name: FUN_0041cffc
// address: 0x41cffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041cffc(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_40;
  undefined1 local_1c [8];
  uint *local_14;
  int local_c [2];
  
  FUN_0041f3fc(0x431208);
  iVar5 = 2;
  FUN_0041e1dc((int)local_1c,param_2);
  FUN_0041db8c(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0041d0b4;
    }
    FUN_00414f78();
    local_14 = (uint *)0x0;
  }
LAB_0041d0b4:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d0de;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d0ff;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d129:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d14a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d0de:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d0ff:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d129;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d14a:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0042428c(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_00424238(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  FUN_0041dd14(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

