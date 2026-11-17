// name: FUN_0048ed90
// address: 0x48ed90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0048ed90(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x506318);
  FUN_0048f078((int)local_14,(char *)0x0,param_2,param_3);
  FUN_0048e860(param_1,(int)local_14);
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
      if (iVar1 != 0) goto LAB_0048ee4b;
    }
    FUN_004cc0bc();
  }
LAB_0048ee4b:
  *param_1 = &PTR_FUN_005044cc;
  param_1[2] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

