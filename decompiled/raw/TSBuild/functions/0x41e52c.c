// name: FUN_0041e52c
// address: 0x41e52c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e52c(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [4];
  int local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0x2c))();
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
  }
  if ((DAT_0047b01c & 2) != 0) {
    if (*(char *)(param_1 + 0x39) == '\0') {
      if (1 < *(int *)(iVar3 + 0x29)) {
        *(undefined4 *)(iVar3 + 0x2d) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0x2d) = 0;
    }
  }
  FUN_0041ecc8(local_38,iVar3,*(int *)(param_1 + 0x58),-1);
  piVar4 = local_38;
  piVar6 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_14 = *(int *)(param_1 + 0x50) - param_3[1];
  local_18 = *(int *)(param_1 + 0x4c) - *param_3;
  local_5c = *(undefined4 *)(iVar3 + 4);
  local_58 = 1;
  piVar4 = local_54;
  local_10 = local_14;
  local_c = local_18;
  local_8 = local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + (uint)bVar7 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
  }
  local_44 = DAT_0048c698;
  local_40 = DAT_0048c698;
  local_3c = 0;
  uVar5 = 3;
  bVar7 = 0;
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    iVar3 = (int)((uint)*(byte *)(param_1 + 0x54) << 0x1c) >> 0x1c;
    if (iVar3 == 1) {
      if ((DAT_0047b01c & 1) == 0) {
        uVar5 = (uint)((*(byte *)(param_1 + 0x56) & 2) != 0);
        bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
      }
      else {
        if ((*(char *)(param_1 + 0x39) == '\0') &&
           (param_1 != *(int *)(*(int *)(param_1 + 6) + 0x20))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar5 = (uint)bVar1;
        if (bVar1) {
          bVar7 = 1;
        }
        else {
          bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
        }
      }
    }
    else if (iVar3 == 2) {
      uVar5 = 2;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
    else {
      uVar5 = 0;
      bVar7 = *(byte *)(param_1 + 0x56) >> 1 & 1;
    }
  }
  FUN_00432478(&local_5c,param_2,local_28,&local_c,uVar5,bVar7,'\0');
  return;
}

