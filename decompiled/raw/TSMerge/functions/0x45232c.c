// name: FUN_0045232c
// address: 0x45232c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045232c(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int local_a0 [6];
  int local_88 [3];
  int local_7c [3];
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00455f04(0x472cd8);
  local_38 = param_3;
  FUN_0045075c(local_7c,0);
  iVar1 = FUN_0044e218();
  if (iVar1 == param_2[9]) {
    FUN_0045075c(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if ((param_3 == -1) && (param_4 == 0)) {
    FUN_0045075c(param_1,-1);
    *in_FS_OFFSET = local_34;
  }
  else if (param_4 == 1) {
    iVar1 = 0;
    local_3c = 0;
    local_40 = 0;
    if ((char)param_2[10] == '\0') {
      if (*(char *)((int)param_2 + 0x29) != '\0') {
        iVar2 = FUN_00450234((int)param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_00450240((int)param_2);
          if (iVar2 != 0) {
            pcVar3 = (char *)FUN_0044f29c((int)param_2);
            pcVar4 = (char *)FUN_00450240((int)param_2);
            iVar1 = FUN_00450d60((int)param_2,pcVar4,pcVar3);
            iVar1 = -iVar1;
            local_3c = FUN_00450240((int)param_2);
            local_40 = FUN_0044f29c((int)param_2);
          }
        }
        else {
          pcVar3 = (char *)FUN_00450228((int)param_2);
          pcVar4 = (char *)FUN_00450234((int)param_2);
          iVar1 = FUN_00450d60((int)param_2,pcVar4,pcVar3);
          iVar1 = -iVar1;
          local_3c = FUN_00450234((int)param_2);
          local_40 = FUN_00450228((int)param_2);
        }
      }
    }
    else {
      iVar2 = FUN_0044f29c((int)param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_00450234((int)param_2);
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_0045024c((int)param_2);
          pcVar4 = (char *)FUN_00450228((int)param_2);
          iVar1 = FUN_00450d60((int)param_2,pcVar4,pcVar3);
          local_3c = FUN_00450228((int)param_2);
          local_40 = FUN_0045024c((int)param_2);
        }
      }
      else {
        iVar1 = FUN_00450240((int)param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_0044f2a8((int)param_2);
          iVar2 = FUN_0044f29c((int)param_2);
          iVar1 = iVar1 - iVar2;
        }
        else {
          pcVar3 = (char *)FUN_0044f2a8((int)param_2);
          pcVar4 = (char *)FUN_0044f29c((int)param_2);
          iVar1 = FUN_00450d60((int)param_2,pcVar4,pcVar3);
        }
        local_3c = FUN_0044f29c((int)param_2);
        local_40 = FUN_0044f2a8((int)param_2);
      }
    }
    local_24 = 8;
    FUN_004502a4(&local_8,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_0045033c(&local_8);
    local_44 = FUN_00452954(piVar5);
    local_18 = local_18 + -1;
    FUN_0040b7b0(&local_8,2);
    if ((param_3 == 0) || (0 < local_44)) {
      if (local_44 < 1) {
        iVar2 = FUN_0044eb5c(param_2,param_2[9],0,1);
        FUN_0045075c(local_88,iVar2);
        FUN_00452964(local_7c,local_88);
        if ((iVar1 != 0) && (iVar2 = FUN_00450240((int)param_2), iVar2 != 0)) {
          local_48 = param_2[0xc];
          local_4c = local_3c;
          local_50 = local_3c;
          local_54 = local_40;
          local_60 = (undefined4 *)FUN_0044b390();
          local_64 = (undefined4 *)((int)local_60 + local_48);
          local_5c = local_60;
          local_58 = local_60;
          do {
            FUN_004501cc((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf]);
            local_24 = 0x14;
            FUN_004502a4(&local_c,(int)param_2);
            local_18 = local_18 + 1;
            piVar5 = (int *)FUN_0045033c(&local_c);
            local_68 = FUN_004501e0(piVar5);
            local_18 = local_18 + -1;
            FUN_0040b7b0(&local_c,2);
            if ((local_68 == 2) || (local_68 == 3)) break;
            if ((local_60 == local_64) && (local_50 != local_54)) {
              local_6c = (int)local_60 - (int)local_58;
              local_48 = local_48 * 2;
              local_5c = (undefined4 *)FUN_0044b390();
              FUN_004559d0(local_5c,local_58,local_6c);
              FUN_0044b2dc();
              local_58 = local_5c;
              local_60 = (undefined4 *)((int)local_5c + local_6c);
              local_4c = local_50;
              local_64 = (undefined4 *)((int)local_5c + local_48);
              local_5c = local_60;
            }
          } while (local_50 != local_54);
          if (iVar1 < 1) {
            FUN_004529a4(local_7c,(int)local_60 + ((-(local_40 - local_3c) - iVar1) - (int)local_58)
                        );
          }
          else {
            FUN_00452994(local_7c,(int)local_60 + ((iVar1 - (local_40 - local_3c)) - (int)local_58))
            ;
          }
          FUN_0044b2dc();
        }
        FUN_00450800(param_1,local_7c);
        *in_FS_OFFSET = local_34;
      }
      else if (param_3 == 0) {
        iVar2 = FUN_0044eb5c(param_2,param_2[9],0,1);
        FUN_0045075c(param_1,(iVar2 - iVar1 * local_44) / local_44);
        *in_FS_OFFSET = local_34;
      }
      else if (*(char *)((int)param_2 + 0x29) == '\0') {
        FUN_0044f38c((int)param_2,0,0);
        FUN_0044f370((int)param_2,0,0,0);
        iVar1 = FUN_0044eb5c(param_2,param_2[9],-((iVar1 - local_38) * local_44),1);
        FUN_0045075c(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
      else {
        FUN_0044e520();
        (**(code **)(*param_2 + 0x24))();
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        iVar1 = FUN_0044eb5c(param_2,param_2[9],local_38 * local_44,1);
        FUN_0045075c(param_1,iVar1 / local_44);
        *in_FS_OFFSET = local_34;
      }
    }
    else {
      FUN_0045075c(param_1,-1);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    local_24 = 0x20;
    FUN_004502a4(&local_10,(int)param_2);
    local_18 = local_18 + 1;
    piVar5 = (int *)FUN_0045033c(&local_10);
    local_70 = FUN_00452954(piVar5);
    local_18 = local_18 + -1;
    FUN_0040b7b0(&local_10,2);
    if (local_70 < 1) {
      if ((param_4 != 0) || (param_3 != 0)) {
        FUN_0045075c(param_1,-1);
        *in_FS_OFFSET = local_34;
        return param_1;
      }
      FUN_0045075c((int *)&stack0xffffff44,0);
      (**(code **)(*param_2 + 0x10))();
    }
    if (*(char *)((int)param_2 + 0x29) != '\0') {
      FUN_0044e520();
      (**(code **)(*param_2 + 0x24))();
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    if (param_4 == 0) {
      iVar1 = 0;
    }
    else if (param_4 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    iVar1 = FUN_0044eb5c(param_2,param_2[9],local_38 * local_70,iVar1);
    FUN_0045075c(local_a0,iVar1);
    FUN_00452964(local_7c,local_a0);
    FUN_0044f38c((int)param_2,0,0);
    FUN_0044f370((int)param_2,0,0,0);
    FUN_00450800(param_1,local_7c);
    *in_FS_OFFSET = local_34;
  }
  return param_1;
}

