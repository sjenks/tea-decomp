// name: FUN_00410538
// address: 0x410538
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00410538(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == param_1) {
    return param_2;
  }
  do {
    piVar1 = param_1;
    param_1 = piVar1 + 1;
    if (param_2 == param_1) {
      return param_2;
    }
  } while (*piVar1 != *param_1);
  return piVar1;
}

