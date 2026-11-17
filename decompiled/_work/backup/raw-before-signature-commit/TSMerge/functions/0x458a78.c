// name: FUN_00458a78
// address: 0x458a78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00458a78(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_00455a40((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_00455ae4(param_2,&DAT_0047546f);
          param_1 = param_1 + 1;
        }
        else {
          FUN_00455ae4(param_2,&DAT_00475474);
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
            FUN_00455ae4(param_2,&DAT_004754a0);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00455ae4(param_2,&DAT_004754a3);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00455ae4(param_2,&DAT_004754a8);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00455ae4(param_2,&DAT_004754ab);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_00458d1a;
          if (param_1[1] == 'H') {
            FUN_00455ae4(param_2,&DAT_00475487);
            param_1 = param_1 + 1;
          }
          else {
            FUN_00455ae4(param_2,&DAT_0047548c);
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
            FUN_00455ae4(param_2,&DAT_00475492);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00455ae4(param_2,&DAT_00475495);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00455ae4(param_2,&DAT_0047549a);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00455ae4(param_2,&DAT_0047549d);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_00455ae4(param_2,&DAT_0047546c);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_00458d1a:
          FUN_00455c4c(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_00455ae4(param_2,&DAT_00475477);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_0047547c);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_00455ae4(param_2,&DAT_0047547f);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_00475484);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_0047548f);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_00458d1a;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_00455ae4(param_2,&DAT_004754ae);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_00455ae4(param_2,&DAT_004754b1);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_00455ae4(param_2,&DAT_004754b6);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

