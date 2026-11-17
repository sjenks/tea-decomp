// name: FUN_0046b1a0
// address: 0x46b1a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0046b1a0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_004675f0((undefined4 *)param_2,0,param_3);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_00467694(param_2,&DAT_00489e67);
          param_1 = param_1 + 1;
        }
        else {
          FUN_00467694(param_2,&DAT_00489e6c);
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
            FUN_00467694(param_2,&DAT_00489e98);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00467694(param_2,&DAT_00489e9b);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00467694(param_2,&DAT_00489ea0);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00467694(param_2,&DAT_00489ea3);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_0046b442;
          if (param_1[1] == 'H') {
            FUN_00467694(param_2,&DAT_00489e7f);
            param_1 = param_1 + 1;
          }
          else {
            FUN_00467694(param_2,&DAT_00489e84);
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
            FUN_00467694(param_2,&DAT_00489e8a);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00467694(param_2,&DAT_00489e8d);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00467694(param_2,&DAT_00489e92);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00467694(param_2,&DAT_00489e95);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_00467694(param_2,&DAT_00489e64);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_0046b442:
          FUN_004677fc(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_00467694(param_2,&DAT_00489e6f);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e74);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_00467694(param_2,&DAT_00489e77);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e7c);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_00467694(param_2,&DAT_00489e87);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_0046b442;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_00467694(param_2,&DAT_00489ea6);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_00467694(param_2,&DAT_00489ea9);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_00467694(param_2,&DAT_00489eae);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

