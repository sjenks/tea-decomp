// name: FUN_004144d0
// address: 0x4144d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004144d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  FUN_00467ba8(0x476a38);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar2 >> 4 == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = (iVar2 >> 4) * 2;
    }
    puVar1 = (undefined4 *)FUN_00456840();
    if (puVar1 == (undefined4 *)0x0) {
      local_c = &PTR_FUN_00476b30;
      FUN_00471ae8((uint *)&DAT_0040eb28,&local_c,0,&LAB_0040eb80,1,0,0,0);
    }
    FUN_00414410(*(undefined4 **)(param_1 + 4),param_2,puVar1);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    puVar4 = puVar1 + (iVar3 >> 4) * 4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
      puVar4[2] = param_3[2];
    }
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_00414410(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar3 >> 4) * 4 + 4);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_00414a7c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_0045680c();
    *(undefined4 **)(param_1 + 0x18) = puVar1 + iVar2 * 4;
    *(undefined4 **)(param_1 + 8) = puVar1 + (iVar3 >> 4) * 4 + 4;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-4];
      local_8[1] = local_8[-3];
      local_8[2] = local_8[-2];
    }
    FUN_004146f8(param_2,*(undefined4 **)(param_1 + 8) + -4,*(undefined4 **)(param_1 + 8));
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
      param_2 = param_2 + (uint)bVar5 * -2 + 1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

