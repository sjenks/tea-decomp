// name: FUN_0046a2b8
// address: 0x46a2b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0046a2b8(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0048d642;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00489724;
  }
  pcVar1 = (char *)FUN_00467b18(param_1,param_2);
  FUN_0046e138((uint)param_3,pcVar1,uVar2);
  FUN_00467694(param_1,&DAT_00489728);
  return param_1;
}

