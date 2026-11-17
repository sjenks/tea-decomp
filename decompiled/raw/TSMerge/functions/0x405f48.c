// name: FUN_00405f48
// address: 0x405f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_00405f48(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,LPCSTR param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  int local_d8;
  int local_cc;
  int local_c0;
  int local_bc;
  undefined4 local_ac;
  int local_88 [33];
  
  FUN_00455f04(0x462338);
  FUN_0044f3d0(local_88,0,param_6,8,0x1b6);
  if ((*(byte *)(local_88[0] + 0x30) & 5) == 0) {
    iVar4 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_3 + 4);
    do {
      if ((iVar4 == *(int *)(param_2 + 8)) && (iVar5 == *(int *)(param_3 + 8))) {
        FUN_00452de4(local_88);
        if ((*(byte *)(local_88[0] + 0x30) & 5) != 0) {
          uVar6 = 4;
          FUN_0044f4c8(local_88,2);
          *in_FS_OFFSET = local_ac;
          return uVar6;
        }
        uVar6 = 0;
        FUN_0044f4c8(local_88,2);
        *in_FS_OFFSET = local_ac;
        return uVar6;
      }
      if (*(int *)(param_2 + 8) == iVar4) {
        iVar2 = -1;
      }
      else if (iVar5 == *(int *)(param_3 + 8)) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_00405984(iVar4,iVar5);
      }
      if (iVar2 == 0) {
        local_bc = iVar4;
        if ((param_4 == 1) || (param_4 == 2)) {
          piVar3 = (int *)FUN_00405e78(iVar4,param_5,local_88);
          if (piVar3 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar3;
          }
          if ((*(byte *)(iVar2 + 0x30) & 5) != 0) {
            uVar6 = 4;
            FUN_0044f4c8(local_88,2);
            *in_FS_OFFSET = local_ac;
            return uVar6;
          }
        }
        do {
          local_cc = local_bc + 0x10;
          local_c0 = iVar5;
          if (*(int *)(param_2 + 8) == local_cc) break;
          iVar2 = FUN_00405984(iVar4,local_cc);
          local_bc = local_cc;
        } while (iVar2 == 0);
        do {
          local_d8 = local_c0 + 0x10;
          if (*(int *)(param_3 + 8) == local_d8) break;
          iVar4 = FUN_00405984(iVar5,local_d8);
          local_c0 = local_d8;
        } while (iVar4 == 0);
      }
      else {
        local_cc = iVar4;
        local_d8 = iVar5;
        if (iVar2 < 1) {
          if ((param_4 == 2) || (param_4 == 4)) {
            piVar3 = (int *)FUN_00405e78(iVar5,param_5,local_88);
            if (piVar3 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *piVar3;
            }
            if ((*(byte *)(iVar4 + 0x30) & 5) != 0) {
              uVar6 = 4;
              FUN_0044f4c8(local_88,2);
              *in_FS_OFFSET = local_ac;
              return uVar6;
            }
          }
          do {
            local_d8 = local_d8 + 0x10;
            if (*(int *)(param_3 + 8) == local_d8) break;
            iVar4 = FUN_00405984(iVar5,local_d8);
          } while (iVar4 == 0);
        }
        else {
          if ((param_4 == 2) || (param_4 == 3)) {
            piVar3 = (int *)FUN_00405e78(iVar4,param_5,local_88);
            if (piVar3 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar3;
            }
            if ((*(byte *)(iVar5 + 0x30) & 5) != 0) {
              uVar6 = 4;
              FUN_0044f4c8(local_88,2);
              *in_FS_OFFSET = local_ac;
              return uVar6;
            }
          }
          do {
            local_cc = local_cc + 0x10;
            if (*(int *)(param_2 + 8) == local_cc) break;
            iVar5 = FUN_00405984(iVar4,local_cc);
          } while (iVar5 == 0);
        }
      }
      FUN_0045b4bc();
      cVar1 = (**(code **)*param_1)();
      iVar4 = local_cc;
      iVar5 = local_d8;
    } while (cVar1 != '\0');
    uVar6 = 1;
    FUN_0044f4c8(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  else {
    uVar6 = 4;
    FUN_0044f4c8(local_88,2);
    *in_FS_OFFSET = local_ac;
  }
  return uVar6;
}

