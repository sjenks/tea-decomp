// name: FUN_004b1c06
// address: 0x4b1c06
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b1c06(uint *param_1,uint *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  for (; (((char)*param_2 != '*' || (*(char *)((int)param_2 + 1) != '\0')) &&
         (((char)*param_2 != '\0' || ((char)*param_1 != '\0'))));
      param_1 = (uint *)((int)param_1 + 1)) {
    if ((char)*param_2 == '*') {
      param_2 = (uint *)((int)param_2 + 1);
      pcVar1 = FUN_004dc9f4(param_1);
      pcVar2 = FUN_004dc9f4(param_2);
      if (pcVar2 < pcVar1) {
        param_1 = (uint *)((int)param_1 + ((int)pcVar1 - (int)pcVar2));
      }
    }
    if (((char)*param_2 != '?') || ((char)*param_1 == '\0')) {
      uVar3 = FUN_004e3054((int)(char)*param_1);
      uVar4 = FUN_004e3054((int)(char)*param_2);
      if (uVar3 != uVar4) {
        return 0;
      }
    }
    param_2 = (uint *)((int)param_2 + 1);
  }
  return CONCAT31((char)*param_2 >> 7,1);
}

