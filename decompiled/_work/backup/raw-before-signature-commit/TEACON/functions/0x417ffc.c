// name: FUN_00417ffc
// address: 0x417ffc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417ffc(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42fe98);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00430b6c;
    FUN_00418080(param_1);
    FUN_00414f78();
    FUN_00414f78();
    FUN_0041820c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

