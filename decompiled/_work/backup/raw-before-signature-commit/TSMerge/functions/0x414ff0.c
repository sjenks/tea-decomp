// name: FUN_00414ff0
// address: 0x414ff0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00414ff0(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_00410934();
  if ((*(int *)(puVar1 + 0x10) != 1) && (puVar1 = FUN_00410934(), *(int *)(puVar1 + 0x10) != 2)) {
    return 1;
  }
  return 0;
}

