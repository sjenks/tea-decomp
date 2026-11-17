// name: FUN_0042aea0
// address: 0x42aea0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0042aea0(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_0047bcf0;
  }
  FUN_004677a0(param_1);
  pcVar1 = (char *)FUN_004568d0();
  pcVar1 = FUN_00467770(pcVar1,(char *)param_1);
  return pcVar1;
}

