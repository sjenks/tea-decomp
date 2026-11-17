// name: FUN_004ae91c
// address: 0x4ae91c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ae91c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x43);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

