// name: FUN_0040ab88
// address: 0x40ab88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040ab88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  FUN_004dce64(0x4ebd08);
  if (param_2 == param_1) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if ((uint)(iVar1 >> 4) < (uint)(iVar2 >> 4)) {
      iVar2 = FUN_004cc0f0();
      if (iVar2 == 0) {
        local_8 = &PTR_FUN_004eac74;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      iVar1 = FUN_0040a988(*(int *)(param_2 + 4),*(int *)(param_2 + 8),iVar2);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_004cc0bc();
      *(int *)(param_1 + 4) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if ((uint)(iVar2 >> 4) < (uint)(iVar1 >> 4)) {
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        FUN_0040add8(*(int *)(param_2 + 4),(iVar2 >> 4) * 0x10 + *(int *)(param_2 + 4),
                     *(int *)(param_1 + 4));
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0xf;
        }
        FUN_0040a988((iVar1 >> 4) * 0x10 + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
                     (iVar2 >> 4) * 0x10 + *(int *)(param_1 + 4));
      }
      else {
        iVar2 = FUN_0040add8(*(int *)(param_2 + 4),*(int *)(param_2 + 8),*(int *)(param_1 + 4));
        FUN_0040b4f0(param_1,iVar2,*(int *)(param_1 + 8));
      }
    }
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(int *)(param_1 + 8) = (iVar2 >> 4) * 0x10 + *(int *)(param_1 + 4);
    *in_FS_OFFSET = local_2c;
  }
  return param_1;
}

