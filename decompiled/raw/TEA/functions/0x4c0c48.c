// name: FUN_004c0c48
// address: 0x4c0c48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c0c48(int param_1,int *param_2,uint param_3,uint param_4)

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
    iVar1 = FUN_004c0cd4(param_1,param_4,local_a4,0x50);
    if (iVar1 == 0) {
      pcVar3 = s_OK_to_Resume__00510045;
    }
    else {
      pcVar3 = local_a4;
    }
  }
  iVar1 = FUN_004c0cd4(param_1,param_3,local_54,0x50);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)0x0;
  }
  else {
    pCVar2 = local_54;
  }
  FUN_0048ec48(param_2,pCVar2,pcVar3);
  return;
}

