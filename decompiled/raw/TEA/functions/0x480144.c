// name: FUN_00480144
// address: 0x480144
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00480144(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x502b48);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_00480340(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00480340(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004803d8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_0048031c(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

