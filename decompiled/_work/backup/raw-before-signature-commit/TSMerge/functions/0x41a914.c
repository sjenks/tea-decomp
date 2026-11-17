// name: FUN_0041a914
// address: 0x41a914
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041a914(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00455f04(0x4673b0);
  FUN_0044b5d4((int *)0x0,0x10,param_1[3],1,FUN_0041a9e0);
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    (**(code **)(param_1[6] + 0x44))();
  }
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    *param_2 = *(undefined4 *)(*param_1 + 0x28);
  }
  else {
    *param_2 = 0;
  }
  if (*(char *)((int)param_1 + 0x32) == '\0') {
    param_2[1] = *(undefined4 *)(*param_1 + 0x2c);
  }
  else if (param_1[3] == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
  }
  FUN_0044b2dc();
  *in_FS_OFFSET = local_34;
  return;
}

