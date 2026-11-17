// name: FUN_0042ced4
// address: 0x42ced4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ced4(int *param_1,int param_2)

{
  SHORT SVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  tagRECT *ptVar5;
  int *piVar6;
  LONG *pLVar7;
  int *piVar8;
  bool bVar9;
  int local_88 [8];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  LONG local_38 [4];
  tagRECT local_28;
  int local_18 [4];
  int local_8;
  
  SVar1 = GetKeyState(1);
  if (-1 < SVar1) {
    if (param_1[0x44] == -1) {
      param_1[0x44] = 0;
    }
    SVar1 = GetKeyState(0x10);
    if ((-1 < SVar1) || (param_1[0x43] != -1)) {
      if ((-1 < SVar1) && (param_1[0x43] != -1)) {
        param_1[0x43] = -1;
      }
    }
    else {
      param_1[0x43] = param_1[0x44];
    }
    bVar9 = false;
    local_8 = param_1[0x44];
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a6c(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar7 = local_48 + 4;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar7 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar7 = pLVar7 + 1;
    }
    piVar6 = local_48 + 4;
    piVar8 = local_18;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if (param_2 == 0x20) {
      bVar9 = true;
    }
    else if ((param_2 == 0x26) || (param_2 == 0x25)) {
      if ((param_1[0x44] != -1) && (0 < param_1[0x44])) {
        param_1[0x44] = param_1[0x44] + -1;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x28) || (param_2 == 0x27)) {
      iVar4 = param_1[0x44];
      if ((iVar4 != -1) && (iVar2 = FUN_0042ba08((int)param_1), iVar4 < iVar2 + -1)) {
        param_1[0x44] = param_1[0x44] + 1;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x24) || (param_2 == 0x23)) {
      iVar4 = FUN_0042ba08((int)param_1);
      if (0 < iVar4) {
        if (param_2 == 0x24) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0042ba08((int)param_1);
          iVar4 = iVar4 + -1;
        }
        param_1[0x44] = iVar4;
      }
      bVar9 = true;
    }
    else if ((param_2 == 0x21) || (param_2 == 0x22)) {
      if ((0 < param_1[0x40]) && (iVar4 = FUN_0042ba08((int)param_1), iVar4 != 0)) {
        iVar4 = (local_18[3] - local_18[1]) / param_1[0x40];
        if (param_2 == 0x21) {
          param_1[0x44] = param_1[0x44] - (iVar4 + -1);
        }
        else {
          param_1[0x44] = param_1[0x44] + iVar4 + -1;
        }
        if (param_1[0x44] < 0) {
          param_1[0x44] = 0;
        }
        else {
          iVar4 = FUN_0042ba08((int)param_1);
          if (iVar4 <= param_1[0x44]) {
            iVar4 = FUN_0042ba08((int)param_1);
            param_1[0x44] = iVar4 + -1;
          }
        }
      }
      bVar9 = true;
    }
    else if (param_2 == 0x5d) {
      FUN_00430aec(param_1,(int *)0x0);
    }
    if (((bVar9) && (iVar4 = FUN_0042ba08((int)param_1), 0 < iVar4)) && (0 < param_1[0x40])) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      if (param_1[0x43] == -1) {
        SVar1 = GetKeyState(0x11);
        bVar9 = SVar1 < 0;
        if ((!bVar9) || (param_2 == 0x20)) {
          iVar4 = 1;
          if ((bVar9) && (iVar2 = FUN_004307e4((int)param_1,param_1[0x44]), iVar2 == 1)) {
            iVar4 = 0;
          }
          FUN_0042ed8c(local_58,param_1,param_1[0x44],1,iVar4,bVar9);
          piVar6 = local_58;
          piVar8 = local_48;
          for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
      }
      else {
        iVar4 = param_1[0x44];
        if (iVar4 != local_8) {
          iVar2 = param_1[0x43];
          if (iVar4 < iVar2) {
            FUN_0042ed8c(local_88 + 4,param_1,param_1[0x44],(param_1[0x43] - param_1[0x44]) + 1,1,
                         '\0');
            piVar6 = local_88 + 4;
            piVar8 = local_48;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
          else {
            FUN_0042ed8c(local_68,param_1,iVar2,(iVar4 - iVar2) + 1,1,'\0');
            piVar6 = local_68;
            piVar8 = local_48;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
        }
      }
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      uVar3 = FUN_00430290(param_1,local_8,1,local_88);
      if ((char)uVar3 != '\0') {
        FUN_00494540(local_48,local_88);
      }
      uVar3 = FUN_00430290(param_1,param_1[0x44],1,local_88);
      if ((char)uVar3 != '\0') {
        FUN_00494540(local_48,local_88);
      }
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
      iVar4 = param_1[0x40];
      iVar2 = *(int *)(*(int *)(*param_1 + 0x44) + 0xc);
      if (param_1[0x44] < (iVar2 + iVar4 + -1) / iVar4) {
        (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
      }
      else if ((((iVar2 + (local_18[3] - local_18[1])) - iVar4) + 1) / iVar4 < param_1[0x44]) {
        (**(code **)(**(int **)(*param_1 + 0x44) + 0x2c))();
      }
    }
  }
  return;
}

