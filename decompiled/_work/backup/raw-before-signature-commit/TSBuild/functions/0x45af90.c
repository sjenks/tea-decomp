// name: FUN_0045af90
// address: 0x45af90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045af90(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486150);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00487708;
    FUN_0045b014(param_1);
    FUN_0045680c();
    FUN_0045680c();
    FUN_0045b1a0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

