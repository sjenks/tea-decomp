// name: FUN_00435268
// address: 0x435268
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435268(int param_1,int *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00435324(*(int *)(param_1 + 8),param_2);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
  FUN_0042de94(param_2,&local_8,4);
  local_c = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  FUN_0042de94(param_2,&local_c,4);
  local_10 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
  FUN_0042de94(param_2,&local_10,4);
  FUN_0042df1c(param_2);
  FUN_0042df1c(param_2);
  FUN_0042df1c(param_2);
  return;
}

