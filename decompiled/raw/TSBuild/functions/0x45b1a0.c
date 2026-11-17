// name: FUN_0045b1a0
// address: 0x45b1a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045b1a0(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4861cc);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004876c8;
    FUN_00405004(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

