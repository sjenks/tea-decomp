// name: FUN_004214fc
// address: 0x4214fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004214fc(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_00434e6a;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_00432728;
  }
  pcVar1 = (char *)FUN_0041f36c(param_1,param_2);
  FUN_00424f68((uint)param_3,pcVar1,uVar2);
  FUN_0041eef0(param_1,&DAT_0043272c);
  return param_1;
}

