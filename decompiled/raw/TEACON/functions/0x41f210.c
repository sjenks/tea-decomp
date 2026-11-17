// name: FUN_0041f210
// address: 0x41f210
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041f210(char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  for (; (param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    if (uVar1 != uVar2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}

