// name: FUN_00419fa4
// address: 0x419fa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419fa4(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x478094);
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00419e8c();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    *piVar1 = 0;
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

