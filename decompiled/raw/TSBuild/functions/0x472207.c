// name: FUN_00472207
// address: 0x472207
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00472207(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_00472089((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

