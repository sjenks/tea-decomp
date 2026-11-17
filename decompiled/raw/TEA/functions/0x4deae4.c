// name: FUN_004deae4
// address: 0x4deae4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_004deae4(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00517340;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00517340 + DAT_005177f0 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

