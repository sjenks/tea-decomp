// name: FUN_00488f30
// address: 0x488f30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00488f30(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x504bac);
  FUN_0048fe64();
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])();
  }
  param_1[0x12] = 0;
  (**(code **)(*param_1 + 0x60))();
  *in_FS_OFFSET = local_30;
  return;
}

