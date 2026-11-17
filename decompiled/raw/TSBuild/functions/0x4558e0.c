// name: FUN_004558e0
// address: 0x4558e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004558e0(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x484330);
  if (param_1 != (int *)0x0) {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)();
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

