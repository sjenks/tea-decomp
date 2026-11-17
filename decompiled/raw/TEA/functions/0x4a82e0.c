// name: FUN_004a82e0
// address: 0x4a82e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004a82e0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x50b2cc);
  iVar2 = DAT_00512a1c;
  uVar4 = param_3;
  puVar1 = FUN_004a4b6b(param_2);
  FUN_0048f258((int)local_14,param_3,puVar1,iVar2);
  FUN_0048ed28(param_1,(int)local_14,uVar4);
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
      if (iVar2 != 0) goto LAB_004a83a8;
    }
    FUN_004cc0bc();
  }
LAB_004a83a8:
  *param_1 = &PTR_FUN_0050b3c0;
  param_1[3] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

