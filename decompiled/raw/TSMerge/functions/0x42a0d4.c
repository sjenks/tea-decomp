// name: FUN_0042a0d4
// address: 0x42a0d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042a0d4(int param_1,int *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0042a190(*(int *)(param_1 + 8),param_2);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
  FUN_00422d00(param_2,&local_8,4);
  local_c = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  FUN_00422d00(param_2,&local_c,4);
  local_10 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
  FUN_00422d00(param_2,&local_10,4);
  FUN_00422d88(param_2);
  FUN_00422d88(param_2);
  FUN_00422d88(param_2);
  return;
}

