// name: FUN_00417498
// address: 0x417498
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417498(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != *(undefined4 **)(param_1 + 0x30)) {
    *puVar1 = param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    return;
  }
  FUN_004174cc(param_1 + 0x18,puVar1,&param_2);
  return;
}

