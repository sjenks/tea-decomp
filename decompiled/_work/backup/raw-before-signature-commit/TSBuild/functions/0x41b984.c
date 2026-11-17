// name: FUN_0041b984
// address: 0x41b984
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_0041b984(void)

{
  undefined *puVar1;
  
  if (DAT_00478b87 == '\0') {
    puVar1 = FUN_0041b958();
    DAT_00478b86 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00478b87 = DAT_00478b87 + '\x01';
  }
  return DAT_00478b86;
}

