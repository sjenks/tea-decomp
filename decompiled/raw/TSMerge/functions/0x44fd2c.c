// name: FUN_0044fd2c
// address: 0x44fd2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044fd2c(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *in_FS_OFFSET;
  int local_54;
  uint local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_35;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  int local_c;
  int local_8;
  
  FUN_00455f04(0x472738);
  iVar3 = FUN_00450228((int)param_1);
  local_34 = FUN_00450234((int)param_1);
  local_34 = iVar3 - local_34;
  iVar3 = FUN_0044e218();
  if (iVar3 == param_1[9]) {
    FUN_0044e520();
    *in_FS_OFFSET = local_30;
    return;
  }
  iVar3 = FUN_00450228((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_0044f29c((int)param_1), iVar3 != 0)) {
    iVar3 = FUN_00450240((int)param_1);
    iVar3 = iVar3 + param_1[0xc];
    uVar4 = FUN_00450240((int)param_1);
    FUN_0044f38c((int)param_1,uVar4,iVar3);
    iVar3 = FUN_0044f29c((int)param_1);
    iVar5 = FUN_00450240((int)param_1);
    FUN_0044f3a4((int)param_1,iVar3 - iVar5);
    FUN_0044f370((int)param_1,0,0,0);
    uVar6 = FUN_00450228((int)param_1);
    uVar7 = FUN_0045024c((int)param_1);
    if (uVar6 < uVar7) {
      local_3c = FUN_0044e520();
      bVar1 = FUN_0044f188((int *)&stack0x00000008,&local_3c);
      if (!bVar1) {
        uVar2 = FUN_0044fcf8(&stack0x00000008);
        FUN_00450258(param_1,uVar2);
        FUN_0044f344((int)param_1,1);
        *(undefined1 *)((int)param_1 + 0x29) = 1;
        puVar8 = (undefined1 *)FUN_00450228((int)param_1);
        FUN_0044f290(puVar8);
        *in_FS_OFFSET = local_30;
        return;
      }
    }
    iVar3 = FUN_00450228((int)param_1);
    local_34 = FUN_00450234((int)param_1);
    local_34 = iVar3 - local_34;
  }
  iVar3 = FUN_00450228((int)param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_0044f29c((int)param_1), iVar3 == 0)) {
    FUN_0044f38c((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  if (local_34 != 0) {
    local_20 = 8;
    FUN_004502a4(&local_8,(int)param_1);
    local_14 = local_14 + 1;
    piVar9 = (int *)FUN_0045033c(&local_8);
    uVar4 = FUN_004501bc(piVar9);
    local_35 = (char)uVar4;
    local_14 = local_14 + -1;
    FUN_0040b7b0(&local_8,2);
    if (local_35 == '\0') {
      local_40 = local_34;
      local_44 = 0;
      pcVar10 = (char *)FUN_0044b390();
      local_48 = (char *)0x0;
      if ((char)param_1[10] != '\0') {
        iVar3 = FUN_0044eb5c(param_1,param_1[9],-param_1[0xb],1);
        if (iVar3 == -1) {
          FUN_0044e520();
          *in_FS_OFFSET = local_30;
          return;
        }
        iVar3 = param_1[0xe];
        param_1[0xe] = param_1[0xf];
        param_1[0xf] = iVar3;
      }
      FUN_004501cc((undefined4 *)param_1[0xe],(undefined4 *)param_1[0xf]);
      do {
        FUN_00450228((int)param_1);
        FUN_00450234((int)param_1);
        local_20 = 0x14;
        FUN_004502a4(&local_c,(int)param_1);
        local_14 = local_14 + 1;
        piVar9 = (int *)FUN_0045033c(&local_c);
        iVar3 = FUN_004501e0(piVar9);
        local_14 = local_14 + -1;
        FUN_0040b7b0(&local_c,2);
        if (iVar3 == 3) break;
        if ((iVar3 == 1) || (iVar5 = FUN_00450228((int)param_1), iVar5 != local_44)) {
          local_40 = local_40 * 2;
          local_4c = (char *)FUN_0044b390();
          local_50 = (int)local_48 - (int)pcVar10;
          FUN_004559d0((undefined4 *)local_4c,(undefined4 *)pcVar10,local_50);
          FUN_0044b2dc();
          local_48 = local_4c + local_50;
          pcVar10 = local_4c;
        }
      } while ((iVar3 == 1) || (iVar5 = FUN_00450228((int)param_1), iVar5 != local_44));
      if (iVar3 == 2) {
        FUN_0044b2dc();
        FUN_0044e520();
        *in_FS_OFFSET = local_30;
        return;
      }
      if (iVar3 == 3) {
        iVar5 = 1;
        iVar3 = local_34;
        pcVar10 = (char *)FUN_00450234((int)param_1);
        bVar1 = FUN_00450378(param_1,param_1[9],pcVar10,iVar5,iVar3);
        if (!bVar1) {
          FUN_0044b2dc();
          FUN_0044e520();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      else {
        bVar1 = FUN_00450378(param_1,param_1[9],pcVar10,1,(int)local_48 - (int)pcVar10);
        if (!bVar1) {
          FUN_0044b2dc();
          FUN_0044e520();
          *in_FS_OFFSET = local_30;
          return;
        }
      }
      FUN_0044b2dc();
    }
    else {
      if (((char)param_1[10] != '\0') &&
         (iVar3 = FUN_0044eb5c(param_1,param_1[9],-param_1[0xb],1), iVar3 == -1)) {
        FUN_0044e520();
        *in_FS_OFFSET = local_30;
        return;
      }
      iVar5 = 1;
      iVar3 = local_34;
      pcVar10 = (char *)FUN_00450234((int)param_1);
      bVar1 = FUN_00450378(param_1,param_1[9],pcVar10,iVar5,iVar3);
      if (!bVar1) {
        FUN_0044e520();
        *in_FS_OFFSET = local_30;
        return;
      }
    }
  }
  FUN_0044f38c((int)param_1,param_1[0x10],param_1[0x10] + param_1[0xc]);
  FUN_0044f370((int)param_1,0,0,0);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  iVar3 = FUN_0044eb5c(param_1,param_1[9],0,1);
  param_1[0xd] = iVar3;
  local_54 = FUN_0044e520();
  bVar1 = FUN_0044f188((int *)&stack0x00000008,&local_54);
  if (bVar1) {
    FUN_0044f38c((int)param_1,0,0);
  }
  else {
    uVar2 = FUN_0044fcf8(&stack0x00000008);
    FUN_00450258(param_1,uVar2);
    FUN_0044f344((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  FUN_00450210((int *)&stack0x00000008);
  *in_FS_OFFSET = local_30;
  return;
}

