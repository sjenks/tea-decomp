// name: FUN_0040a338
// address: 0x40a338
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0040a338(int param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_0041ef80((uint *)(param_1 + 0x408));
  pcVar1 = (char *)(param_1 + 0x408 + (int)(pcVar1 + 1));
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

