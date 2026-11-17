// name: FUN_00487578
// address: 0x487578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __stdcall FUN_00487578(void)

{
  undefined *puVar1;
  
  if (DAT_0050451b == '\0') {
    puVar1 = FUN_0048751c();
    DAT_0050451a = *(int *)(puVar1 + 0x10) != 0;
    DAT_0050451b = DAT_0050451b + '\x01';
  }
  return DAT_0050451a;
}

