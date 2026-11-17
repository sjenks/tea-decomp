// name: FUN_004df5b0
// address: 0x4df5b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004df5b0(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0051c1ca;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_005179f0;
  }
  pcVar1 = (char *)FUN_004dcdd4(param_1,param_2);
  FUN_004e3f90((uint)param_3,pcVar1,uVar2);
  FUN_004dc8e8(param_1,&DAT_005179f4);
  return param_1;
}

