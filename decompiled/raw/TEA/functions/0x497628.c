// name: FUN_00497628
// address: 0x497628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00497628(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507c7c);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *in_FS_OFFSET = local_28;
  return param_1;
}

