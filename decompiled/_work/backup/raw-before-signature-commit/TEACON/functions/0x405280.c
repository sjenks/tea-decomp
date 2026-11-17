// name: FUN_00405280
// address: 0x405280
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405280(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42b654);
  if (param_1 != 0) {
    FUN_00414f88();
    FUN_004052f4(param_1 + 8,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    FUN_00414f78();
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

