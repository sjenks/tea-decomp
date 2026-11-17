// name: FUN_004cbb00
// address: 0x4cbb00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cbb00(uint *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  char **ppcVar2;
  char *local_8;
  
  *param_1 = *param_1 | 1;
  param_1[4] = (uint)param_2;
  if ((int)param_3 < 0) {
    pcVar1 = FUN_004dc9f4(param_2);
    pcVar1 = pcVar1 + 1;
  }
  else {
    pcVar1 = FUN_004dc9f4(param_2);
    local_8 = pcVar1 + 1;
    if (param_3 < pcVar1 + 1) {
      ppcVar2 = &local_8;
    }
    else {
      ppcVar2 = &param_3;
    }
    pcVar1 = *ppcVar2;
  }
  param_1[5] = (uint)pcVar1;
  return;
}

