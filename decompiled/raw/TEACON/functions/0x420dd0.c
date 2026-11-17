// name: FUN_00420dd0
// address: 0x420dd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00420dd0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = param_1[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)param_1 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*param_1;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)param_1[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}

