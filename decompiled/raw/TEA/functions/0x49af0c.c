// name: FUN_0049af0c
// address: 0x49af0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049af0c(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    HeapDestroy((HANDLE)*param_1);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

