// name: FUN_0042a81f
// address: 0x42a81f
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_0042a81f(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  DWORD local_18 [3];
  int local_c;
  
  FUN_00455f04(0x46a43c);
  if (param_1 == 0) {
    *in_FS_OFFSET = local_3c;
    return s_MSWHEEL_ROLLMSG_0046a464 + 0xf;
  }
  FUN_004435d0(local_18);
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  puVar1 = FUN_0045666c(param_1,iVar2,0x40467c);
  FUN_0045677c((int)puVar1);
  FUN_00457ef4(&DAT_0047707c,(byte *)s__s___u___s__Error___s_0046a4ce);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0042a92d;
    }
    FUN_0044b2cc();
  }
LAB_0042a92d:
  *in_FS_OFFSET = local_3c;
  return &DAT_0047707c;
}

