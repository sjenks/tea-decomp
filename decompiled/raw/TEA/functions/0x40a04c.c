// name: FUN_0040a04c
// address: 0x40a04c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040a04c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  FUN_004dce64(0x4ebb84);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if ((uint)(iVar2 >> 7) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      local_3c = iVar1 >> 7;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = FUN_004cc0f0();
      if (iVar1 == 0) {
        local_1c = 8;
        local_8 = &PTR_FUN_004eac74;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0040a2f4(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040ae88((iVar2 >> 7) * 0x80 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040a2f4(param_2,*(int *)(param_1 + 8),((iVar2 >> 7) + param_3) * 0x80 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040b62c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_004cc0bc();
      *(int *)(param_1 + 0x18) = local_38 * 0x80 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 7) * 0x80 + iVar1 + param_3 * 0x80;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      if (param_3 < (uint)(iVar2 >> 7)) {
        FUN_0040a2f4(iVar1 + param_3 * -0x80,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x80;
        FUN_0040ab04(param_2,iVar1 + param_3 * -0x80,iVar1);
        FUN_0040ae0c(param_2,param_3 * 0x80 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        iVar2 = param_3 - (iVar2 >> 7);
        FUN_0040ae88(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x80;
        FUN_0040a2f4(param_2,iVar1,param_3 * 0x80 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x80;
        FUN_0040ae0c(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

