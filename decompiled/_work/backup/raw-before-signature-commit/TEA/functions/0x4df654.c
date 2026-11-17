// name: thunk_FUN_004de1a0
// address: 0x4df654
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl thunk_FUN_004de1a0(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_005177f0) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004de634(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_004de634(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = FUN_004dc794(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_005177f4)[param_1] = (&DAT_005177f4)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004de634(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_004de134(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_004df280(-6);
  }
  return pcVar1;
}

