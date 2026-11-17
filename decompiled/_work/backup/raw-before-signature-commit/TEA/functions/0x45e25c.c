// name: FUN_0045e25c
// address: 0x45e25c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045e25c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  HWND local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  FUN_004dce64(0x4f9ec8);
  piVar4 = (int *)0x0;
  local_30 = 1;
  if (param_2 == 0) {
    local_34 = GetTopWindow((HWND)0x0);
    local_38 = 0;
    while (((local_38 < 1000 && (local_34 != (HWND)0x0)) && (piVar4 == (int *)0x0))) {
      local_3c = 0;
      while( true ) {
        iVar3 = param_1[0x322] - param_1[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (((uint)(iVar3 >> 2) <= local_3c) || (piVar4 != (int *)0x0)) break;
        local_40 = local_3c;
        piVar4 = (int *)(param_1[0x321] + local_3c * 4);
        if (*piVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*piVar4 + 8);
        }
        piVar4 = FUN_004dd744(*piVar4,iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
        if (piVar4 != (int *)0x0) {
          iVar3 = piVar4[1];
          if (*(int *)(iVar3 + 0xc) == 0) {
            bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
          }
          else {
            BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
            bVar5 = BVar2 != 0;
          }
          if ((!bVar5) || (*(HWND *)(piVar4[1] + 0xc) != local_34)) {
            piVar4 = (int *)0x0;
          }
        }
        local_3c = local_3c + 1;
      }
      local_34 = GetWindow(local_34,2);
      local_38 = local_38 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    local_44 = 0;
    while( true ) {
      iVar3 = param_1[0x322] - param_1[0x321];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if ((uint)(iVar3 >> 2) <= local_44) break;
      local_48 = local_44;
      piVar4 = (int *)(param_1[0x321] + local_44 * 4);
      if (*piVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*piVar4 + 8);
      }
      piVar4 = FUN_004dd744(*piVar4,iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
      if (piVar4 != (int *)0x0) {
        iVar3 = piVar4[1];
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = BVar2 != 0;
        }
        if (!bVar5) break;
        piVar4 = (int *)0x0;
        local_30 = local_30 + 1;
      }
      local_44 = local_44 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    iVar3 = FUN_00466b28(param_1[0xe]);
    local_8 = (int *)FUN_004cc0f0();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_004723b0(local_8,0,*param_1,param_1[0xe],local_30,iVar3);
      local_1c = 8;
    }
    piVar4 = local_8;
    (**(code **)(*(int *)(local_8[1] + 8) + 0x10))();
    if (piVar4 == (int *)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = piVar4[1];
    }
    piVar1 = (int *)param_1[0x322];
    if (piVar1 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar1,&local_4c);
    }
    else {
      *piVar1 = local_4c;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  *in_FS_OFFSET = local_2c;
  return piVar4;
}

