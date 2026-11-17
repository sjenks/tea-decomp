// name: FUN_00446cf0
// address: 0x446cf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00446cf0(int *param_1)

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
  
  FUN_00467ba8(0x481660);
  FUN_00448a7c(param_1);
  param_1[0xe] = 0x1006;
  param_1[0xe] = param_1[0xe] | 0x200000;
  bVar2 = FUN_0041b9e4();
  if (bVar2) {
    param_1[0xe] = param_1[0xe] | 0x80000;
  }
  FUN_0044f1ec((int)local_14,*(int *)(*param_1 + 0x70),0x7f2a);
  FUN_00450c98(local_c,param_1 + 0xe,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00446dd4;
    }
    FUN_0045680c();
    local_c = (char *)0x0;
  }
LAB_00446dd4:
  FUN_00447024(param_1,(uint *)param_1[0x18]);
  if ((param_1[0x18] == 0) || (cVar3 = (**(code **)(param_1[3] + 100))(), cVar3 != '\0'))
  goto LAB_00447011;
  FUN_0044f1ec((int)local_34,*(int *)(*param_1 + 0x70),0x7f27);
  local_1c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_2c + -4);
    piVar6 = FUN_00459f00(local_24,uVar1,uVar1);
    local_1c = (byte *)(piVar6 + 3);
    FUN_00467580((undefined4 *)local_1c,(undefined4 *)local_2c,uVar1);
  }
  else {
    local_1c = local_2c;
    pbVar7 = local_2c + -0xc;
    if (pbVar7 != (byte *)&DAT_00485bcc) {
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar7 = local_2c + -0xc;
      if (pbVar7 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00446f3e;
    }
    FUN_0045680c();
    local_2c = (byte *)0x0;
  }
LAB_00446f3e:
  puVar5 = (undefined1 *)FUN_004568d0();
  FUN_0046a5c8(puVar5,local_1c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_0045681c();
  FUN_00447024(param_1,(uint *)0x0);
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      pbVar7 = local_1c + -0xc;
      if (pbVar7 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (pbVar7 == (byte *)&DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        iVar4 = *(int *)pbVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00447011;
    }
    FUN_0045680c();
  }
LAB_00447011:
  *in_FS_OFFSET = local_58;
  return;
}

