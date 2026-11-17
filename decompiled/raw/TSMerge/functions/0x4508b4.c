// name: FUN_004508b4
// address: 0x4508b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004508b4(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *in_FS_OFFSET;
  int local_50;
  int local_48;
  int local_40;
  int local_3c;
  char *local_38;
  char local_31;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  FUN_00455f04(0x4727ac);
  FUN_00450d28(&local_38,0);
  iVar2 = FUN_0044e218();
  if (iVar2 == param_1[9]) {
    FUN_0044e520();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar2 = FUN_0044f29c((int)param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_00450228((int)param_1), iVar2 != 0)) {
    if ((char)param_1[10] == '\0') {
      uVar3 = FUN_00450228((int)param_1);
      uVar4 = FUN_00450228((int)param_1);
      uVar5 = FUN_00450234((int)param_1);
      FUN_0044f370((int)param_1,uVar5,uVar4,uVar3);
    }
    else {
      uVar3 = FUN_0045024c((int)param_1);
      uVar4 = FUN_00450228((int)param_1);
      uVar5 = FUN_00450234((int)param_1);
      FUN_0044f370((int)param_1,uVar5,uVar4,uVar3);
    }
    FUN_0044f38c((int)param_1,0,0);
  }
  iVar2 = FUN_0044f29c((int)param_1);
  if (iVar2 != 0) {
    uVar6 = FUN_0044f29c((int)param_1);
    uVar7 = FUN_0044f2a8((int)param_1);
    if (uVar6 < uVar7) {
      puVar8 = (undefined1 *)FUN_0044f29c((int)param_1);
      FUN_0044f290(puVar8);
      *in_FS_OFFSET = local_30;
      return;
    }
  }
  if (((*(char *)((int)param_1 + 0x29) != '\0') && (iVar2 = FUN_0044f29c((int)param_1), iVar2 != 0))
     || ((*(char *)((int)param_1 + 0x29) != '\0' && (iVar2 = FUN_00450228((int)param_1), iVar2 != 0)
         ))) {
    local_40 = FUN_0044e520();
    piVar9 = &local_40;
    FUN_0044e520();
    local_3c = (**(code **)(*param_1 + 0x24))();
    bVar1 = FUN_0044f188(&local_3c,piVar9);
    if (bVar1) {
      FUN_0044e520();
      *in_FS_OFFSET = local_30;
      return;
    }
    uVar3 = FUN_0045024c((int)param_1);
    uVar4 = FUN_00450228((int)param_1);
    uVar5 = FUN_00450234((int)param_1);
    FUN_0044f370((int)param_1,uVar5,uVar4,uVar3);
    FUN_0044f38c((int)param_1,0,0);
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  iVar2 = FUN_0044eb5c(param_1,param_1[9],0,1);
  param_1[0xd] = iVar2;
  local_20 = 8;
  FUN_004502a4(&local_8,(int)param_1);
  local_14 = local_14 + 1;
  piVar9 = (int *)FUN_0045033c(&local_8);
  uVar3 = FUN_004501bc(piVar9);
  local_31 = (char)uVar3;
  local_14 = local_14 + -1;
  FUN_0040b7b0(&local_8,2);
  if (local_31 == '\0') {
    local_48 = 0;
    puVar10 = (undefined4 *)FUN_0044b390();
    pcVar13 = (char *)0x0;
    while (pcVar11 = FUN_00450d38(param_1,param_1[9],pcVar13 + (int)puVar10,1,param_1[0xc]),
          puVar12 = puVar10, 0 < (int)pcVar11) {
      pcVar13 = pcVar13 + (int)pcVar11;
      FUN_004501cc((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      local_20 = 0x14;
      FUN_004502a4(&local_c,(int)param_1);
      local_14 = local_14 + 1;
      piVar9 = (int *)FUN_0045033c(&local_c);
      local_50 = FUN_00450cf8(piVar9);
      local_14 = local_14 + -1;
      FUN_0040b7b0(&local_c,2);
      if ((local_50 == 2) || (local_50 == 3)) break;
      if (((char *)param_1[0xc] + param_1[0x10] != (char *)0x0) && ((char *)param_1[0xc] == pcVar11)
         ) {
        puVar12 = (undefined4 *)FUN_0044b390();
        FUN_004559d0(puVar12,puVar10,(uint)pcVar13);
        FUN_0044b2dc();
        local_48 = (local_48 - (int)puVar10) + (int)puVar12;
      }
      if (((char *)param_1[0xc] + param_1[0x10] == (char *)0x0) ||
         (puVar10 = puVar12, (char *)param_1[0xc] != pcVar11)) break;
    }
    if ((int)pcVar13 < 1) {
      FUN_0044e520();
      *in_FS_OFFSET = local_30;
      return;
    }
    param_1[0xb] = (int)pcVar13;
    if ((local_50 == 2) || (local_50 == 1)) {
      FUN_0044b2dc();
      FUN_0044e520();
      *in_FS_OFFSET = local_30;
      return;
    }
    if (local_50 == 3) {
      FUN_004559d0((undefined4 *)param_1[0x10],puVar12,param_1[0xb]);
      local_38 = (char *)param_1[0xb];
    }
    else {
      iVar14 = (int)pcVar11 - (local_48 - (int)puVar12);
      iVar2 = FUN_0044eb5c(param_1,param_1[9],-iVar14,1);
      if (iVar2 == -1) {
        FUN_0044e520();
        *in_FS_OFFSET = local_30;
        return;
      }
      param_1[0xb] = param_1[0xb] - iVar14;
      local_38 = (char *)-param_1[0x10];
    }
    FUN_0044b2dc();
  }
  else {
    local_38 = FUN_00450d38(param_1,param_1[9],(char *)param_1[0x10],1,param_1[0xc]);
    if ((int)local_38 < 1) {
      FUN_0044e520();
      *in_FS_OFFSET = local_30;
      return;
    }
    iVar2 = FUN_00450d60((int)param_1,(char *)param_1[0x10],local_38 + param_1[0x10]);
    param_1[0xb] = iVar2;
  }
  if (param_1[0xb] == 0) {
    FUN_0044e520();
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar2 = param_1[0x10];
    FUN_0044f370((int)param_1,iVar2,iVar2,local_38 + iVar2);
    FUN_0044f38c((int)param_1,0,0);
    *(undefined1 *)(param_1 + 10) = 1;
    puVar8 = (undefined1 *)FUN_0044f29c((int)param_1);
    FUN_0044f290(puVar8);
    *in_FS_OFFSET = local_30;
  }
  return;
}

