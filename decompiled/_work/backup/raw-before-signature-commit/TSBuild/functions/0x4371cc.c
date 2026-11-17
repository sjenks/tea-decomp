// name: FUN_004371cc
// address: 0x4371cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004371cc(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x84))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  else {
    (*pcRam0000000c)();
  }
  return;
}

