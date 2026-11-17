// name: FUN_00469054
// address: 0x469054
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00469054(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x4fcea8);
  if (param_1 != 0) {
    piVar1 = (int *)FUN_004690e8();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    *piVar1 = 0;
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

