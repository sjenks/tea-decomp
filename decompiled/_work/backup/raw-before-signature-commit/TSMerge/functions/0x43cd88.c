// name: FUN_0043cd88
// address: 0x43cd88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0043cd88(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_00455f04(0x46dbb4);
  iVar1 = FUN_0042d1a4(*param_1,0xb8,0,0);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_68;
    return 1;
  }
  FUN_00444058((int)local_34,*(int *)(*param_1 + 0x70),0x7f29);
  local_c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar4 = *(uint *)(local_2c + -4);
    piVar2 = FUN_0044d2a4(local_14,uVar4,uVar4);
    local_c = (byte *)(piVar2 + 3);
    FUN_004559d0((undefined4 *)local_c,(undefined4 *)local_2c,uVar4);
  }
  else {
    local_c = local_2c;
    pbVar5 = local_2c + -0xc;
    if (pbVar5 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar5 = *(int *)pbVar5 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar5 = local_2c + -0xc;
      if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0043cf19;
    }
    FUN_0044b2cc();
    local_2c = (byte *)0x0;
  }
LAB_0043cf19:
  FUN_00444058((int)local_44,*(int *)(*param_1 + 0x70),0x7f26);
  local_1c = (int *)0x0;
  if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
    uVar4 = local_3c[-1];
    local_1c = FUN_0044d2a4(local_24,uVar4,uVar4);
    local_1c = local_1c + 3;
    FUN_004559d0(local_1c,local_3c,uVar4);
  }
  else {
    local_1c = local_3c;
    piVar2 = local_3c + -3;
    if (piVar2 != &DAT_00471d5c) {
      *piVar2 = *piVar2 + 1;
    }
  }
  if (local_3c != (int *)0x0) {
    if (local_3c[-3] != -1) {
      piVar2 = local_3c + -3;
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d0a2;
    }
    FUN_0044b2cc();
    local_3c = (int *)0x0;
  }
LAB_0043d0a2:
  puVar3 = (undefined1 *)FUN_0044b390();
  FUN_00457ef4(puVar3,local_c);
  iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_0044b2dc();
  if (iVar1 == 6) {
    uVar4 = (**(code **)(param_1[3] + 0x6c))();
  }
  else {
    uVar4 = (uint)(iVar1 != 2);
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar2 = local_1c + -3;
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d1b9;
    }
    FUN_0044b2cc();
    local_1c = (int *)0x0;
  }
LAB_0043d1b9:
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar5 = local_c + -0xc;
      if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d24b;
    }
    FUN_0044b2cc();
  }
LAB_0043d24b:
  *in_FS_OFFSET = local_68;
  return uVar4;
}

