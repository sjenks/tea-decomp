// name: FUN_00487548
// address: 0x487548
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_00487548(void)

{
  undefined *puVar1;
  
  if (DAT_00504517 == '\0') {
    puVar1 = FUN_0048751c();
    DAT_00504516 = *(int *)(puVar1 + 0x10) != 0;
    DAT_00504517 = DAT_00504517 + '\x01';
  }
  return DAT_00504516;
}

