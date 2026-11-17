// name: FUN_0043f27c
// address: 0x43f27c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f27c(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46e28c);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00466164;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0xc))();
    }
    if ((param_1[1] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[1])();
    }
    FUN_0044b2dc();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

