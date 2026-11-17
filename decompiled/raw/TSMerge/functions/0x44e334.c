// name: FUN_0044e334
// address: 0x44e334
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044e334(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4721c0);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_004730e0;
    FUN_0044e3b8(param_1);
    FUN_0044b2cc();
    FUN_0044b2cc();
    FUN_0044e544(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

