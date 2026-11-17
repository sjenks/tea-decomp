// name: FUN_004a2fa4
// address: 0x4a2fa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a2fa4(int param_1)

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

