// name: FUN_004e83e3
// address: 0x4e83e3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e83e3(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_004e8265((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

