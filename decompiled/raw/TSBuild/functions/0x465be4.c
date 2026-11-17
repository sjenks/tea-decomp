// name: FUN_00465be4
// address: 0x465be4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00465be4(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  char local_98 [16];
  char local_88 [16];
  char local_78 [16];
  char local_68 [16];
  char local_58 [32];
  char local_38 [16];
  undefined4 local_28;
  undefined2 local_18;
  
  bVar9 = 0;
  FUN_00467ba8(0x4885b8);
  local_18 = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_0046d720((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_00465d23;
  FUN_004677a0(puVar2);
  pcVar3 = (char *)FUN_004568d0();
  pcVar4 = s_LC_COLLATE_00488310;
  pcVar8 = local_98;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (param_3 < 5) {
    if (param_3 == 4) {
      pcVar4 = local_78;
    }
    else if (param_3 == 1) {
      pcVar4 = local_98;
    }
    else {
      if (param_3 != 2) goto LAB_00465c86;
      pcVar4 = local_88;
    }
  }
  else if (param_3 == 0x10) {
    pcVar4 = local_68;
  }
  else if (param_3 == 0x20) {
    pcVar4 = local_58;
  }
  else {
LAB_00465c86:
    pcVar4 = local_38;
  }
  pcVar4 = thunk_FUN_00467ac4((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_FUN_004676d0((char *)param_1[1],'=');
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar4 = (char *)param_1[1];
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = pcVar4 + 1;
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  pcVar4 = thunk_FUN_004676d0(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_00465d23:
  FUN_0046d720((ushort)param_3,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

