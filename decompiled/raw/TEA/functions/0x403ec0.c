// name: FUN_00403ec0
// address: 0x403ec0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403ec0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  FUN_004dce64(0x4eab74);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (iVar1 >> 3 == 0) {
      iVar1 = 0x80;
    }
    else {
      iVar1 = (iVar1 >> 3) * 2;
    }
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 == (undefined4 *)0x0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004041a0(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    puVar4 = puVar2 + (iVar3 >> 3) * 2;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
    }
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    FUN_004041a0(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 3) * 2 + 2);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    FUN_0040317c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1 * 2;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 3) * 2 + 2;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-2];
      local_8[1] = local_8[-1];
    }
    FUN_00404174(param_2,*(undefined4 **)(param_1 + 8) + -2,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  }
  *in_FS_OFFSET = local_34;
  return;
}

