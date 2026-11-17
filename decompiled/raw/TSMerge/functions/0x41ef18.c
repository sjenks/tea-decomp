// name: FUN_0041ef18
// address: 0x41ef18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041ef18(int *param_1)

{
  undefined4 uVar1;
  
  if ((((*param_1 == 0) || (*(char *)(*param_1 + 8) != '\0')) &&
      ((param_1[1] == 0 || (*(char *)(param_1[1] + 8) != '\0')))) &&
     ((param_1[2] == 0 || (*(char *)(param_1[2] + 8) != '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

