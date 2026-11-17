// name: FUN_0045c238
// address: 0x45c238
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c238(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4864fc);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00487608;
    *(undefined ***)*param_1 = &PTR_LAB_00487614;
    FUN_0045af90(param_1 + 2,2);
    FUN_0045b7ec(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_0045b8dc(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

