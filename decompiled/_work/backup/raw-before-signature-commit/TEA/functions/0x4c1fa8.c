// name: FUN_004c1fa8
// address: 0x4c1fa8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c1fa8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x510680);
  uVar3 = 0;
  FUN_0048f258((int)local_14,0x7ff8,param_2,DAT_00512a1c);
  FUN_0048ed28(param_1,(int)local_14,uVar3);
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
      if (iVar1 != 0) goto LAB_004c2066;
    }
    FUN_004cc0bc();
  }
LAB_004c2066:
  *param_1 = &PTR_FUN_00510750;
  *in_FS_OFFSET = local_38;
  return param_1;
}

