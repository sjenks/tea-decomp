// name: FUN_004e0ff8
// address: 0x4e0ff8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004e0ff8(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_004dc844((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_004dc8e8(param_2,&DAT_005181b7);
          param_1 = param_1 + 1;
        }
        else {
          FUN_004dc8e8(param_2,&DAT_005181bc);
        }
      }
      else if (cVar1 < 'N') {
        pcVar2 = param_1;
        if (cVar1 == 'M') {
          while (*pcVar2 == 'M') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_004dc8e8(param_2,&DAT_005181e8);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_004dc8e8(param_2,&DAT_005181eb);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_004dc8e8(param_2,&DAT_005181f0);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_004dc8e8(param_2,&DAT_005181f3);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_004e129a;
          if (param_1[1] == 'H') {
            FUN_004dc8e8(param_2,&DAT_005181cf);
            param_1 = param_1 + 1;
          }
          else {
            FUN_004dc8e8(param_2,&DAT_005181d4);
          }
        }
      }
      else {
        pcVar2 = param_1;
        if (cVar1 == 'd') {
          while (*pcVar2 == 'd') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_004dc8e8(param_2,&DAT_005181da);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_004dc8e8(param_2,&DAT_005181dd);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_004dc8e8(param_2,&DAT_005181e2);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_004dc8e8(param_2,&DAT_005181e5);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_004dc8e8(param_2,&DAT_005181b4);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_004e129a:
          FUN_004dca50(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_004dc8e8(param_2,&DAT_005181bf);
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181c4);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_004dc8e8(param_2,&DAT_005181c7);
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181cc);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_004dc8e8(param_2,&DAT_005181d7);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_004e129a;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_004dc8e8(param_2,&DAT_005181f6);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_004dc8e8(param_2,&DAT_005181f9);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_004dc8e8(param_2,&DAT_005181fe);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

