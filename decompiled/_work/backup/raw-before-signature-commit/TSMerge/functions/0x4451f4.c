// name: FUN_004451f4
// address: 0x4451f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004451f4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x46f4f0);
  uVar3 = 0;
  FUN_00418444((int)local_14,0x7ff8,param_2,DAT_00470a60);
  FUN_00417f14(param_1,(int)local_14,uVar3);
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
      if (iVar1 != 0) goto LAB_004452b2;
    }
    FUN_0044b2cc();
  }
LAB_004452b2:
  *param_1 = &PTR_FUN_0046f5c0;
  *in_FS_OFFSET = local_38;
  return param_1;
}

