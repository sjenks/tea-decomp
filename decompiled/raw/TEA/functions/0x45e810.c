// name: FUN_0045e810
// address: 0x45e810
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045e810(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x60)) ||
     (*(int *)(param_1 + 100) < *(int *)(param_1 + 0xc))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

