// name: FUN_004e88e3
// address: 0x4e88e3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004e88e3(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_004e5ce8(s_varType_>tpClass_tpcFlags___CF_H_00519491,s_xx_cpp_005194b9,0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_004e87a1(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_004e5ce8(s_dtorCnt_<_varCount_005194c0,s_xx_cpp_005194d3,0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_004e5ce8(s_IS_STRUC_blType_>tpMask__005194da,s_xx_cpp_005194f3,0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_004e8898(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_004e5ce8(s_IS_STRUC_blType_>tpMask__005194fa,s_xx_cpp_00519513,0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_004e8898(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_004e8898(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_004e5ce8(s_memType_0051951a,s_xx_cpp_00519522,0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_004e5ce8(s_memType_>tpClass_tpcFlags___CF_H_00519529,s_xx_cpp_00519551,0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_004e88e3(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_004e8b93(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_004e8898(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_004e8898(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

