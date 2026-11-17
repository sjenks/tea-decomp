// name: FUN_0040d9e4
// address: 0x40d9e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040d9e4(char param_1)

{
  char *pcVar1;
  
  if (DAT_0042c930 != 0) {
    for (pcVar1 = &DAT_00434688; pcVar1 < &DAT_00434692; pcVar1 = pcVar1 + 1) {
      if (param_1 == *pcVar1) {
        return 1;
      }
    }
  }
  return 0;
}

