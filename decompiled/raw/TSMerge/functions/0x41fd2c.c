// name: FUN_0041fd2c
// address: 0x41fd2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0041fd2c(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_00467f14;
  }
  FUN_00455bf0(param_1);
  pcVar1 = (char *)FUN_0044b390();
  pcVar1 = FUN_00455bc0(pcVar1,(char *)param_1);
  return pcVar1;
}

