// name: FUN_004734c4
// address: 0x4734c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004734c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4feea4);
  FUN_00436b94((int)local_14,param_2,param_1 + 0x88);
  FUN_004a7780(*(int *)(param_1 + 4),local_c);
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
      if (iVar1 != 0) goto LAB_0047357d;
    }
    FUN_004cc0bc();
  }
LAB_0047357d:
  *in_FS_OFFSET = local_38;
  return;
}

