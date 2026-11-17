// name: FUN_00475ff0
// address: 0x475ff0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00475ff0(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fff78);
  FUN_004156f4(param_1);
  FUN_004cf628((int)local_14,(uint *)s_External_Lookup___004ffe43);
  FUN_004d573c((int)local_14,(int)(param_1 + 0xa2));
  FUN_004b0c44(param_1,local_c);
  FUN_004760d8((int)param_1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar1 = *local_c + 1;
      }
      if (iVar1 != 0) goto LAB_004760c5;
    }
    FUN_004cc0bc();
  }
LAB_004760c5:
  *in_FS_OFFSET = local_38;
  return;
}

