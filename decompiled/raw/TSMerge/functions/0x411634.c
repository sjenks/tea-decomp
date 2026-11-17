// name: FUN_00411634
// address: 0x411634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411634(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x465138);
  if (param_1 != (int *)0x0) {
    FUN_00411768(param_1);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

