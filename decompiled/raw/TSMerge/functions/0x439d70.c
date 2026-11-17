// name: FUN_00439d70
// address: 0x439d70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00439d70(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_00455f04(0x46d23c);
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
      FUN_00439c84(param_1);
      FUN_0044a1bc();
      *in_FS_OFFSET = local_38;
    }
  }
  return param_2;
}

