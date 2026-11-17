// name: FUN_0042dd80
// address: 0x42dd80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dd80(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042d94c(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

