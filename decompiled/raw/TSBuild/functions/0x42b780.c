// name: FUN_0042b780
// address: 0x42b780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042b780(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bfe0);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *in_FS_OFFSET = local_28;
  return param_1;
}

