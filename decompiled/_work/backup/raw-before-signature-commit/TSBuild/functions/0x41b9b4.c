// name: FUN_0041b9b4
// address: 0x41b9b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_0041b9b4(void)

{
  undefined *puVar1;
  
  if (DAT_00478b8b == '\0') {
    puVar1 = FUN_0041b958();
    DAT_00478b8a = *(int *)(puVar1 + 0x10) != 0;
    DAT_00478b8b = DAT_00478b8b + '\x01';
  }
  return DAT_00478b8a;
}

