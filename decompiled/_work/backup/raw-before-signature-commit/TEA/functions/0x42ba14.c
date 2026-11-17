// name: FUN_0042ba14
// address: 0x42ba14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042ba14(int param_1)

{
  undefined1 local_18 [8];
  int local_10;
  int local_8;
  
  local_8 = 0;
  local_10 = *(int *)(*(int *)(param_1 + 0x9c) + 8);
  while( true ) {
    if (*(int *)(param_1 + 0x9c) == local_10) break;
    local_8 = local_8 + *(int *)(local_10 + 0x14);
    FUN_0042ba94((int)local_18);
  }
  return local_8;
}

