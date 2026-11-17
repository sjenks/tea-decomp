// name: FUN_0045b864
// address: 0x45b864
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045b864(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486378);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_004876ac;
    *(undefined ***)*param_1 = &PTR_LAB_004876b8;
    if ((param_2 & 2) != 0) {
      FUN_0045b8dc(param_1 + 3,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

