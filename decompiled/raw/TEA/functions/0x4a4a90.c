// name: FUN_004a4a90
// address: 0x4a4a90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a4a90(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

