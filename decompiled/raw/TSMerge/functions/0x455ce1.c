// name: thunk_FUN_00455e2c
// address: 0x455ce1
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl thunk_FUN_00455e2c(uint *param_1,char param_2)

{
  char *pcVar1;
  uint *puVar2;
  
  pcVar1 = FUN_00455bf0(param_1);
  puVar2 = (uint *)(pcVar1 + (int)param_1);
  while( true ) {
    if (param_2 == (char)*puVar2) {
      return puVar2;
    }
    if (param_1 == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

