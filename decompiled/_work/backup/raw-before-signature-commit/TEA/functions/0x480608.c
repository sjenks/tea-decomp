// name: FUN_00480608
// address: 0x480608
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00480608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10c [15];
  undefined4 local_d0 [41];
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x502bac);
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x254);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 == 0) {
      local_8 = (undefined4 *)FUN_004cc0f0();
      if (local_8 != (undefined4 *)0x0) {
        local_1c = 0x14;
        FUN_00480754(local_10c,param_1);
        puVar5 = local_10c;
        puVar4 = (undefined4 *)(param_1 + 0xb8);
        FUN_00481b70(local_d0,param_1);
        FUN_00481f7c(local_8,local_d0,puVar4,puVar5);
        local_1c = 8;
      }
      iVar1 = *(int *)(param_1 + 0x254);
      iVar3 = 0;
      if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x18)) {
        FUN_0047f820(iVar1,*(undefined4 **)(iVar1 + 8),&local_8);
      }
      else {
        **(int **)(iVar1 + 8) = (int)local_8;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
      }
    }
    else {
      iVar3 = (iVar3 >> 2) + -1;
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x254) + 4) + iVar3 * 4);
  }
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

