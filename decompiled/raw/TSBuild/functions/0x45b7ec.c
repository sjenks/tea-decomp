// name: FUN_0045b7ec
// address: 0x45b7ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045b7ec(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486354);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00487690;
    *(undefined ***)*param_1 = &PTR_LAB_0048769c;
    if ((param_2 & 2) != 0) {
      FUN_0045b8dc(param_1 + 2,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

