// name: FUN_0044f028
// address: 0x44f028
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f028(int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  CHAR local_a4 [80];
  CHAR local_54 [80];
  
  if (param_3 == 0) {
    param_3 = 0x7ffc;
  }
  if (param_4 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    iVar1 = FUN_0044f0b4(param_1,param_4,local_a4,0x50);
    if (iVar1 == 0) {
      pcVar3 = s_OK_to_Resume__00482c91;
    }
    else {
      pcVar3 = local_a4;
    }
  }
  iVar1 = FUN_0044f0b4(param_1,param_3,local_54,0x50);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)0x0;
  }
  else {
    pCVar2 = local_54;
  }
  FUN_00422fa8(param_2,pCVar2,pcVar3);
  return;
}

