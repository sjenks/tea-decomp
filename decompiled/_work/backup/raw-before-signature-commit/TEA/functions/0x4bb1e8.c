// name: FUN_004bb1e8
// address: 0x4bb1e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bb1e8(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50f020);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00505a90;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0xc))();
    }
    if ((param_1[1] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[1])();
    }
    FUN_004cc0cc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

