// name: FUN_0045cb4c
// address: 0x45cb4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045cb4c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486718);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487770;
    FUN_0040473c((int)(param_1 + 0x10),2);
    FUN_0040473c((int)(param_1 + 0xc),2);
    FUN_0040473c((int)(param_1 + 8),2);
    FUN_0041c2dc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

