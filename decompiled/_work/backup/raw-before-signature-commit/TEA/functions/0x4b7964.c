// name: FUN_004b7964
// address: 0x4b7964
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b7964(int *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 extraout_ECX;
  int *piVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x50e5e8);
  FUN_004b9854(param_1);
  param_1[0xe] = 0x1006;
  param_1[0xe] = param_1[0xe] | 0x200000;
  bVar2 = FUN_004875a8();
  if (bVar2) {
    param_1[0xe] = param_1[0xe] | 0x80000;
  }
  FUN_004c0e0c((int)local_14,*(int *)(*param_1 + 0x70),0x7f2a);
  FUN_004c28b8(local_c,param_1 + 0xe,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004b7a48;
    }
    FUN_004cc0bc();
    local_c = (char *)0x0;
  }
LAB_004b7a48:
  FUN_004b7c98(param_1,(uint *)param_1[0x18]);
  if ((param_1[0x18] == 0) || (cVar3 = (**(code **)(param_1[3] + 100))(), cVar3 != '\0'))
  goto LAB_004b7c85;
  FUN_004c0e0c((int)local_34,*(int *)(*param_1 + 0x70),0x7f27);
  local_1c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_2c + -4);
    piVar6 = FUN_004cf7b0(local_24,uVar1,uVar1);
    local_1c = (byte *)(piVar6 + 3);
    FUN_004dc7d4((undefined4 *)local_1c,(undefined4 *)local_2c,uVar1);
  }
  else {
    local_1c = local_2c;
    pbVar7 = local_2c + -0xc;
    if (pbVar7 != (byte *)&DAT_00513d58) {
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar7 = local_2c + -0xc;
      if (pbVar7 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_004b7bb2;
    }
    FUN_004cc0bc();
    local_2c = (byte *)0x0;
  }
LAB_004b7bb2:
  puVar5 = (undefined1 *)FUN_004cc180();
  FUN_004e0344(puVar5,local_1c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_004cc0cc();
  FUN_004b7c98(param_1,(uint *)0x0);
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar7 = local_1c + -0xc;
      if (pbVar7 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_004b7c85;
    }
    FUN_004cc0bc();
  }
LAB_004b7c85:
  *in_FS_OFFSET = local_58;
  return;
}

