// name: FUN_0046e428
// address: 0x46e428
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0046e428(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_0046b464(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_0046e45a;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_0046e45a:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

