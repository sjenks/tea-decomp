// name: FUN_004b5890
// address: 0x4b5890
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b5890(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x50df58);
  if (param_2 == 0) {
    param_2 = 0;
    *in_FS_OFFSET = local_38;
  }
  else if (*(int *)(param_2 + 0x18) == 0) {
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(param_2 + 8))();
    }
    param_2 = 0;
    *in_FS_OFFSET = local_38;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x54))();
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(param_2 + 8))();
      }
      param_2 = 0;
      *in_FS_OFFSET = local_38;
    }
    else {
      FUN_004b57a4(param_1);
      FUN_004ca358();
      *in_FS_OFFSET = local_38;
    }
  }
  return param_2;
}

