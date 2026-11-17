// name: FUN_00435768
// address: 0x435768
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00435768(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort local_5c;
  ushort local_5a;
  short local_58;
  ushort local_56;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  short local_48;
  ushort local_46;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  short local_2c;
  int local_22;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  int local_8;
  
  iVar4 = 0;
  if (param_3 != '\0') {
    iVar1 = (**(code **)*param_2)();
    if ((iVar1 != 0xe) || (local_2c != 0x4d42)) {
      FUN_0043e780();
      return 0;
    }
    if (local_22 != 0) {
      iVar4 = local_22 + -0xe;
    }
  }
  iVar1 = (**(code **)*param_2)();
  if ((iVar1 == 4) && ((local_8 == 0xc || (local_8 == 0x28)))) {
    local_54 = 0x28;
    local_9 = local_8 == 0xc;
    if ((bool)local_9) {
      local_10 = 8;
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != local_10) {
        FUN_0043e780();
        return 0;
      }
      local_50 = (uint)local_5c;
      local_4c = (uint)local_5a;
      local_48 = local_58;
      local_46 = local_56;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
    }
    else {
      local_14 = local_8 + -4;
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != local_14) {
        FUN_0043e780();
        return 0;
      }
    }
    if (local_48 == 1) {
      if (local_34 == 0) {
        local_34 = FUN_004152b4(local_46);
      }
      if ((local_44 == 0) || (local_44 == 3)) {
        uVar3 = local_46 * local_50 + 0x1f & 0xffffffe0;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 7;
        }
        local_40 = ((int)uVar3 >> 3) * local_4c;
      }
      FUN_004353fc(param_1,&local_54);
      if (*(int *)((int)param_1 + 0xd) != 0) {
        local_18 = 0xc;
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_18) {
          GlobalUnlock((HGLOBAL)*param_1);
          return 0;
        }
      }
      if (local_9 == '\0') {
        local_1c = *(int *)((int)param_1 + 0x19) << 2;
      }
      else {
        local_1c = *(int *)((int)param_1 + 0x19) * 3;
      }
      if (*(int *)((int)param_1 + 0x11) != 0) {
        iVar1 = (**(code **)*param_2)();
        if (iVar1 != local_1c) {
          GlobalUnlock((HGLOBAL)*param_1);
          return 0;
        }
        if (local_9 != '\0') {
          iVar1 = *(int *)((int)param_1 + 0x19);
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 2 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 2 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 1 + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 1 + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + iVar1 * 4) =
                 *(undefined1 *)(*(int *)((int)param_1 + 0x11) + iVar1 * 3);
            *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 3 + iVar1 * 4) = 0;
          }
        }
      }
      if ((iVar4 != 0) && (0 < iVar4 - (local_8 + local_1c))) {
        (**(code **)(*param_2 + 4))();
      }
      iVar4 = (**(code **)*param_2)();
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
    else {
      FUN_0043e780();
      uVar2 = 0;
    }
  }
  else {
    FUN_0043e780();
    uVar2 = 0;
  }
  return uVar2;
}

