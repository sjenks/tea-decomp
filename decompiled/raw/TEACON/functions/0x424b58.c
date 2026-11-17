// name: FUN_00424b58
// address: 0x424b58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00424b58(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    pcVar3 = param_1;
    cVar2 = *pcVar3;
    param_1 = pcVar3 + 1;
    iVar1 = FUN_00426774((int)cVar2);
  } while (iVar1 != 0);
  if ((cVar2 == '+') || (cVar2 == '-')) {
    bVar5 = cVar2 == '-';
    cVar2 = *param_1;
    param_1 = pcVar3 + 2;
  }
  else {
    bVar5 = false;
  }
  while (('/' < cVar2 && (cVar2 < ':'))) {
    iVar4 = iVar4 * 10 + (int)cVar2 + -0x30;
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  }
  if (bVar5) {
    iVar4 = -iVar4;
  }
  return iVar4;
}

