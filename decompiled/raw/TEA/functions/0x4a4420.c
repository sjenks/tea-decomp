// name: FUN_004a4420
// address: 0x4a4420
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a4420(int param_1,int *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004a44dc(*(int *)(param_1 + 8),param_2);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
  FUN_0049a294(param_2,&local_8,4);
  local_c = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  FUN_0049a294(param_2,&local_c,4);
  local_10 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
  FUN_0049a294(param_2,&local_10,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  return;
}

