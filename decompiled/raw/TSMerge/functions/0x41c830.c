// name: FUN_0041c830
// address: 0x41c830
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041c830(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x4676ec);
  FUN_00418548((int)local_14,param_2,param_3,DAT_00470a60);
  FUN_00417f14(param_1,(int)local_14,param_2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041c8ec;
    }
    FUN_0044b2cc();
  }
LAB_0041c8ec:
  *param_1 = &PTR_FUN_004677bc;
  *in_FS_OFFSET = local_38;
  return param_1;
}

