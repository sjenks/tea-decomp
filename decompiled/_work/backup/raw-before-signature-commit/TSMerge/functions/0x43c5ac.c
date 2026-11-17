// name: FUN_0043c5ac
// address: 0x43c5ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043c5ac(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_00455f04(0x46da50);
  iVar2 = FUN_0042d1a4(*param_1,0xb8,0,0);
  uVar3 = 0;
  if (iVar2 == 0) {
LAB_0043c816:
    *in_FS_OFFSET = local_48;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  if (param_1[0x18] == 0) {
    uVar3 = (**(code **)(param_1[3] + 0x70))();
    *in_FS_OFFSET = local_48;
    return uVar3;
  }
  uVar3 = (**(code **)(param_1[3] + 0x74))();
  if ((char)uVar3 != '\0') goto LAB_0043c816;
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f28);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    piVar4 = FUN_0044d2a4(local_14,uVar1,uVar1);
    local_c = (byte *)(piVar4 + 3);
    FUN_004559d0((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    pbVar6 = local_1c + -0xc;
    if (pbVar6 != (byte *)&DAT_00471d5c) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar6 = local_1c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar2 = *(int *)pbVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c747;
    }
    FUN_0044b2cc();
    local_1c = (byte *)0x0;
  }
LAB_0043c747:
  puVar5 = (undefined1 *)FUN_0044b390();
  FUN_00457ef4(puVar5,local_c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_0044b2dc();
  uVar3 = 0;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar2 = *(int *)pbVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c803;
    }
    FUN_0044b2cc();
  }
LAB_0043c803:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

