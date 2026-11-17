// name: FUN_0047c18c
// address: 0x47c18c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0047c18c(char *param_1,uint *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  char local_404 [1003];
  byte local_19;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((char)*param_2 == '\0') {
    param_2 = (uint *)0x0;
  }
  else {
    local_8 = (int)param_2 + (-1 - (int)param_1);
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = param_2;
    pcVar8 = (char *)0x1;
    iVar3 = FUN_004e133c((int)(char)*param_2);
    if (iVar3 != 0) {
      do {
        puVar4 = param_2;
        param_2 = (uint *)((int)puVar4 + 1);
        if (*(char *)param_2 == '\0') {
          return (uint *)0x0;
        }
        iVar3 = FUN_004e133c((int)*(char *)param_2);
      } while (iVar3 != 0);
      pcVar8 = (char *)((int)param_2 - (int)local_18);
      if (*(char *)param_2 == '-') {
        param_2 = (uint *)((int)puVar4 + 2);
        local_14 = 1;
        if (*(char *)param_2 == '\0') {
          return (uint *)0x0;
        }
      }
      if (('/' < (char)*param_2) && ((char)*param_2 < ':')) {
        local_c = 1;
        do {
          uVar5 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          local_10 = local_10 * 10 + (int)(char)uVar5 + -0x30;
          if (*(char *)param_2 == '\0') {
            return (uint *)0x0;
          }
        } while (('/' < *(char *)param_2) && (*(char *)param_2 < ':'));
        if (local_14 != 0) {
          local_10 = -local_10;
        }
      }
      if ((char)*param_2 != ' ') {
        param_2 = (uint *)((int)param_2 + -1);
      }
    }
    if ((char *)0x3e7 < pcVar8) {
      pcVar8 = (char *)0x3e8;
    }
    FUN_004dcc40((undefined4 *)local_404,local_18,pcVar8);
    local_404[(int)pcVar8] = '\0';
    if (param_3[1] == 2) {
      if ((local_404[0] == 'f') && (local_404[1] == '\0')) {
        iVar3 = 0;
        puVar4 = param_2;
        while ((puVar4 = (uint *)((int)puVar4 + 1), *(char *)puVar4 != '\0' &&
               ((cVar2 = *(char *)puVar4, cVar2 != ';' || (iVar3 != 0))))) {
          if (cVar2 == '{') {
            iVar3 = iVar3 + 1;
          }
          else if (cVar2 == '}') {
            iVar3 = iVar3 + -1;
          }
        }
        FUN_0047efa0((int)param_3,local_10,(uint)((int)param_2 + 1),(int)puVar4);
      }
      else if ((local_404[0] == '*') && (local_404[1] == '\0')) {
        param_3[1] = 3;
      }
      else {
        pcVar8 = local_404;
        pcVar7 = s_fcharset_00501da2;
        do {
          bVar10 = *pcVar8 == *pcVar7;
          if (!bVar10) break;
          if (*pcVar8 == '\0') goto LAB_0047c340;
          pcVar1 = pcVar8 + 1;
          bVar10 = *pcVar1 == pcVar7[1];
          if (!bVar10) break;
          pcVar8 = pcVar8 + 2;
          pcVar7 = pcVar7 + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
LAB_0047c340:
          if (local_c != 0) {
            FUN_0047f6ec((int)param_3,(char)local_10);
          }
        }
      }
    }
    else {
      uVar5 = FUN_0047c140(local_404);
      local_19 = (&DAT_0051ac90)[uVar5];
      if (local_19 < 0x4c) {
        pcVar8 = local_404;
        pcVar7 = (&PTR_DAT_005015e0)[local_19];
        do {
          if (*pcVar8 != *pcVar7) goto LAB_0047c3c9;
          bVar10 = true;
          if (*pcVar8 == '\0') break;
          pcVar1 = pcVar8 + 1;
          if (*pcVar1 != pcVar7[1]) goto LAB_0047c3c9;
          pcVar8 = pcVar8 + 2;
          pcVar7 = pcVar7 + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
          if (local_c == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = &local_10;
          }
          FUN_0047c9d0(param_3,local_8,(uint)local_19,piVar6);
        }
      }
LAB_0047c3c9:
      if (param_3[1] == 1) {
        pcVar8 = thunk_FUN_004dcd18(param_1,s___colortbl_00501dab);
        param_3[0x60] = (int)pcVar8 - (int)param_1;
        pcVar8 = (char *)((int)param_2 + 1);
        iVar3 = 0;
        while (pcVar7 = pcVar8, *pcVar8 != '}') {
          for (; (*pcVar7 != '}' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
          }
          iVar9 = iVar3 + 1;
          FUN_0047ede4((int)param_3,iVar3,(undefined4 *)pcVar8,(int)pcVar7);
          pcVar8 = pcVar7;
          iVar3 = iVar9;
          if (*pcVar7 == ';') {
            pcVar8 = pcVar7 + 1;
          }
        }
        param_2 = (uint *)(pcVar8 + -1);
        param_3[0x61] = pcVar8 + (1 - (int)param_1);
      }
    }
  }
  return param_2;
}

