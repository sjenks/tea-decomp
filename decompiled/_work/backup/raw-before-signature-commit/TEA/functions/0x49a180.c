// name: FUN_0049a180
// address: 0x49a180
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a180(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_00499d4c(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

