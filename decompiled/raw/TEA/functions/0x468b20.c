// name: FUN_00468b20
// address: 0x468b20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00468b20(char param_1)

{
  char *pcVar1;
  
  if (DAT_004fcb84 != 0) {
    for (pcVar1 = &DAT_0051ac68; pcVar1 < &DAT_0051ac72; pcVar1 = pcVar1 + 1) {
      if (param_1 == *pcVar1) {
        return 1;
      }
    }
  }
  return 0;
}

