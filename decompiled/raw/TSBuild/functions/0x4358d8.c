// name: FUN_004358d8
// address: 0x4358d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004358d8(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

