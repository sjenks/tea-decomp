// name: FUN_0043c0f0
// address: 0x43c0f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c0f0(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_00455f04(0x46d97c);
  cVar2 = (**(code **)(param_1[3] + 100))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_0043be90(param_1,param_2);
    goto LAB_0043c343;
  }
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f27);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    piVar3 = FUN_0044d2a4(local_14,uVar1,uVar1);
    local_c = (byte *)(piVar3 + 3);
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
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043c280;
    }
    FUN_0044b2cc();
    local_1c = (byte *)0x0;
  }
LAB_0043c280:
  puVar5 = (undefined1 *)FUN_0044b390();
  FUN_00457ef4(puVar5,local_c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_0044b2dc();
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043c343;
    }
    FUN_0044b2cc();
  }
LAB_0043c343:
  *in_FS_OFFSET = local_48;
  return;
}

