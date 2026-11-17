// name: FUN_00420b14
// address: 0x420b14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_00420b14(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00432078;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00432078 + DAT_00432528 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

