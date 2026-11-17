// name: FUN_004a4b6b
// address: 0x4a4b6b
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_004a4b6b(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  FUN_004dce64(0x50ac5c);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
    return s_MSWHEEL_ROLLMSG_0050ac84 + 0xf;
  }
  FUN_004c0384(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_004dd5cc(param_1,iVar2,0x40299c);
  FUN_004dd6dc((int)puVar1);
  FUN_004e0344(&DAT_0051b678,(byte *)s__s___u___s__Error___s_0050acee);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004a4c79;
    }
    FUN_004cc0bc();
  }
LAB_004a4c79:
  *in_FS_OFFSET = local_3c;
  return &DAT_0051b678;
}

