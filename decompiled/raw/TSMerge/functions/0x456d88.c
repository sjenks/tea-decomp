// name: FUN_00456d88
// address: 0x456d88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00456d88(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}

