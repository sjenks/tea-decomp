// name: FUN_00428c58
// address: 0x428c58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00428c58(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x18);
  }
  return uVar1;
}

