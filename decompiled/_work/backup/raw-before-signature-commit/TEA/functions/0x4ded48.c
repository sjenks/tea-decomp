// name: FUN_004ded48
// address: 0x4ded48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004ded48(char *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    pcVar2 = FUN_004dec18(param_1,(char *)(param_2 * param_3),param_4);
    uVar1 = (uint)(param_2 * param_3 - (int)param_4) / (uint)pcVar2;
  }
  return uVar1;
}

