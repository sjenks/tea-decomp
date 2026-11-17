// name: FUN_004d984c
// address: 0x4d984c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d984c(int param_1,int *param_2)

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
  
  FUN_004dce64(0x516254);
  iVar5 = 2;
  FUN_004db488((int)local_1c,param_2);
  FUN_004dae38(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_004d9904;
    }
    FUN_004cc0bc();
    local_14 = (uint *)0x0;
  }
LAB_004d9904:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004d992e;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004d994f;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d9979:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d999a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d992e:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d994f:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9979;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_004d999a:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_004e3054(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_004e3000(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  FUN_004dafc0(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

