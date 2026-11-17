// name: FUN_00463508
// address: 0x463508
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char FUN_00463508(char *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  char *unaff_EBX;
  char *unaff_EDI;
  
  cVar2 = (char)((uint)param_2 >> 8);
  *param_1 = *param_1 + cVar2;
  cVar1 = (char)param_1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *unaff_EDI = *unaff_EDI + cVar2;
  *param_1 = *param_1 + cVar1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)unaff_EBX;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *unaff_EBX = *unaff_EBX + param_3;
  *param_1 = *param_1 + cVar1;
  *unaff_EBX = *unaff_EBX + param_3;
  *param_1 = *param_1 + cVar1;
  return cVar1 + cVar2;
}

