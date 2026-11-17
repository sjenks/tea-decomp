// name: FUN_00493560
// address: 0x493560
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00493560(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x5070ec);
  FUN_0048f35c((int)local_14,param_2,param_3,DAT_00512a1c);
  FUN_0048ed28(param_1,(int)local_14,param_2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0049361c;
    }
    FUN_004cc0bc();
  }
LAB_0049361c:
  *param_1 = &PTR_FUN_005071bc;
  *in_FS_OFFSET = local_38;
  return param_1;
}

