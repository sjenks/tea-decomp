// name: FUN_0046a388
// address: 0x46a388
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl
FUN_0046a388(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_0046a3b0:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    uVar2 = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < 0x80)) && (iVar3 = FUN_0046fc30(uVar2), iVar3 != 0))
      goto LAB_0046a3b0;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_0046a4ff;
    if ((iVar5 != 1) || ((iVar5 = 2, uVar2 != 0x2b && (uVar2 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((uVar2 == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          uVar2 = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_0046a4ff;
          if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
            param_4 = 0x10;
            goto LAB_0046a3b0;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_0046a4ff;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
          if (((int)uVar2 < 0x61) || (0x7a < (int)uVar2)) {
            if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_0046a4ff;
            local_1c = uVar2 - 0x37;
          }
          else {
            local_1c = uVar2 - 0x57;
          }
        }
        else {
          local_1c = uVar2 - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_0046a4ff;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_0046a4ff:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (uVar2 == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_0046a3b0;
    }
    bVar6 = uVar2 == 0x2d;
    param_5 = iVar3;
  } while( true );
}

