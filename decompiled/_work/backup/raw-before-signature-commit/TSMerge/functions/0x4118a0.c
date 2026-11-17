// name: FUN_004118a0
// address: 0x4118a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004118a0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

