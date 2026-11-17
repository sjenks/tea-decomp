// name: FUN_00422bec
// address: 0x422bec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422bec(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_004227b8(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

