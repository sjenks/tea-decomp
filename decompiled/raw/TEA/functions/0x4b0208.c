// name: FUN_004b0208
// address: 0x4b0208
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004b0208(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return cVar1 == '\0';
}

