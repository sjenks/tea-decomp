// name: FUN_004076a8
// address: 0x4076a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004076a8(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eb510);
  if (param_1 != 0) {
    FUN_004cc0cc();
    FUN_0040771c(param_1 + 8,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

