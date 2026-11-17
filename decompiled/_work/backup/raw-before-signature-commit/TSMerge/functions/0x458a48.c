// name: thunk_FUN_004574e4
// address: 0x458a48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl thunk_FUN_004574e4(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_20c [512];
  int iStack_c;
  int iStack_8;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 + 1 < 2) {
      iStack_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 8) != 0) {
        FUN_00456ed8(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
        iStack_c = FUN_004576e8(param_1,param_2,param_3);
      }
      else {
        iStack_8 = 0;
        iStack_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = acStack_20c;
          while (((int)pcVar3 - (int)acStack_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              iStack_8 = iStack_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004576e8(param_1,acStack_20c,(int)pcVar3 - (int)acStack_20c);
          if (iVar2 != (int)pcVar3 - (int)acStack_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (iStack_c - iStack_8) + iVar2;
          }
          iStack_c = iStack_c + iVar2;
        }
        iStack_c = iStack_c - iStack_8;
      }
    }
  }
  else {
    iStack_c = FUN_00457c6c(-6);
  }
  return iStack_c;
}

