// name: FUN_0044a410
// address: 0x44a410
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044a410(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x482068);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00479f18;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0xc))();
    }
    if ((param_1[1] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[1])();
    }
    FUN_0045681c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

