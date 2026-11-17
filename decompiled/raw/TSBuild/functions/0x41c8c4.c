// name: FUN_0041c8c4
// address: 0x41c8c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041c8c4(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

