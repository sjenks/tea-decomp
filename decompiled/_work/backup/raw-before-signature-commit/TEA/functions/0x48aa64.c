// name: FUN_0048aa64
// address: 0x48aa64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048aa64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_005053ac;
  if (DAT_005053ac != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_005053ac = param_1;
  return;
}

