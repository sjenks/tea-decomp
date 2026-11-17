// name: FUN_0049d148
// address: 0x49d148
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049d148(int *param_1,int param_2,ushort param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  char *local_78;
  undefined4 local_48;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x50906c);
  if (param_1[2] != 0) goto LAB_0049d39b;
  FUN_004c0e0c((int)local_24,param_2,(uint)param_3);
  local_c = (uint *)0x0;
  if (local_1c[-3] == 0xffffffff || (int)(local_1c[-3] + 1) < 0) {
    uVar1 = local_1c[-1];
    piVar2 = FUN_004cf7b0(local_14,uVar1,uVar1);
    local_c = (uint *)(piVar2 + 3);
    FUN_004dc7d4(local_c,local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    puVar5 = local_1c + -3;
    if (puVar5 != &DAT_00513d58) {
      *puVar5 = *puVar5 + 1;
    }
  }
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d29a;
    }
    FUN_004cc0bc();
    local_1c = (uint *)0x0;
  }
LAB_0049d29a:
  if (local_c[-1] != 0) {
    param_4 = local_c;
  }
  iVar3 = FUN_00496d48(param_4);
  param_1[1] = iVar3;
  *param_1 = 1;
  for (local_78 = (char *)param_1[1]; *local_78 != '\0'; local_78 = local_78 + 1) {
    if (*local_78 == '|') {
      *local_78 = '\0';
      *param_1 = *param_1 + 1;
    }
  }
  iVar3 = FUN_004cc180();
  param_1[2] = iVar3;
  puVar5 = (uint *)param_1[1];
  for (iVar3 = 0; iVar3 < *param_1; iVar3 = iVar3 + 1) {
    *(uint **)(param_1[2] + iVar3 * 4) = puVar5;
    pcVar4 = FUN_004dc9f4(puVar5);
    puVar5 = (uint *)((int)puVar5 + (int)(pcVar4 + 1));
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar5 = local_c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d39b;
    }
    FUN_004cc0bc();
  }
LAB_0049d39b:
  *in_FS_OFFSET = local_48;
  return;
}

