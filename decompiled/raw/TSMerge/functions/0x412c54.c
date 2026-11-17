// name: FUN_00412c54
// address: 0x412c54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00412c54(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x465538);
  FUN_004190f0();
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])();
  }
  param_1[0x12] = 0;
  (**(code **)(*param_1 + 0x60))();
  *in_FS_OFFSET = local_30;
  return;
}

