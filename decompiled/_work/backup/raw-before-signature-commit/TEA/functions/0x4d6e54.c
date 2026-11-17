// name: FUN_004d6e54
// address: 0x4d6e54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d6e54(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 local_238 [4];
  undefined4 local_228 [4];
  undefined4 local_218 [4];
  undefined4 local_208 [4];
  undefined4 local_1f8 [4];
  undefined4 local_1e8 [4];
  undefined4 local_1d8 [4];
  undefined4 local_1c8 [4];
  undefined4 local_1b8 [4];
  undefined1 local_1a8;
  undefined1 local_1a7 [399];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_7;
  char local_6;
  char local_5;
  
  local_5 = '\0';
  local_6 = '\0';
  if ((*(char **)(param_1 + 0x2c) < *(char **)(param_1 + 0x30)) &&
     (((cVar1 = **(char **)(param_1 + 0x2c), cVar1 == ' ' || (cVar1 == '-')) || (cVar1 == '+')))) {
    local_5 = '\x01';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    pcVar8 = *(char **)(param_1 + 0x30);
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x2c);
    if (local_5 != '\0') {
      pcVar8 = pcVar8 + 1;
    }
    for (; pcVar8 < *(char **)(param_1 + 0x30); pcVar8 = pcVar8 + 1) {
      if ((*pcVar8 < '0') || ('9' < *pcVar8)) {
        if ((*pcVar8 != 'e') && (*pcVar8 != 'E')) {
          local_6 = '\x01';
        }
        break;
      }
    }
  }
  local_c = (int)pcVar8 - *(int *)(param_1 + 0x2c);
  if (local_5 != '\0') {
    local_c = local_c + -1;
  }
  if ((*(int *)(param_1 + 0x18) == 10) && (*(char *)(param_1 + 0x29) != '\0')) {
    pcVar3 = (char *)FUN_004d71bc(param_1);
    local_c = FUN_004dc2bc(param_1,local_c,pcVar3);
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_004d71d4(param_1);
      local_7 = (undefined1)uVar4;
    }
  }
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  iVar6 = local_18;
  iVar2 = local_14;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = (*(int *)(param_1 + 0x14) - (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c))) -
            *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (((0 < iVar5) && (iVar6 = iVar5, *(int *)(param_1 + 0x24) != 0)) &&
       (iVar6 = local_18, iVar2 = iVar5, *(int *)(param_1 + 0x24) != 1)) {
      iVar2 = local_14;
      local_10 = iVar5;
    }
  }
  local_14 = iVar2;
  local_18 = iVar6;
  FUN_004d6dc8(*(int **)(param_1 + 0x268));
  puVar7 = &local_1a8;
  while (iVar6 = local_10, local_10 = local_10 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_004d71e8(local_1b8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1b8);
    FUN_004d7218(iVar6,uVar9);
  }
  if (local_5 != '\0') {
    puVar7 = local_1a7;
    uVar9 = local_1a8;
    FUN_004d71e8(local_1c8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1c8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = local_14, local_14 = local_14 + -1, iVar6 != 0) {
    uVar9 = param_2;
    FUN_004d71e8(local_1d8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1d8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = local_c, local_c = local_c + -1, iVar6 != 0) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_004d71e8(local_1e8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1e8);
    FUN_004d7218(iVar6,uVar9);
  }
  while (iVar6 = *(int *)(param_1 + 0x20), *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1,
        iVar6 != 0) {
    uVar9 = local_7;
    FUN_004d71e8(local_1f8,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_1f8);
    FUN_004d7218(iVar6,uVar9);
    while( true ) {
      pcVar3 = *(char **)(param_1 + 0x34);
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar3 + -1;
      if (cVar1 == '\0') break;
      uVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      FUN_004d71e8(local_208,*(undefined4 **)(param_1 + 0x278));
      iVar6 = FUN_004d7210(local_208);
      FUN_004d7218(iVar6,uVar9);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  if (local_6 != '\0') {
    uVar4 = FUN_004d7264(param_1);
    uVar9 = (undefined1)uVar4;
    FUN_004d71e8(local_218,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_218);
    FUN_004d7218(iVar6,uVar9);
    puVar7 = puVar7 + 1;
  }
  local_c = *(int *)(param_1 + 0x30) - (int)pcVar8;
  if (local_6 != '\0') {
    local_c = local_c + -1;
  }
  while (iVar6 = local_c, local_c = local_c + -1, 0 < iVar6) {
    uVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_004d71e8(local_228,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_228);
    FUN_004d7218(iVar6,uVar9);
  }
  while (local_18 != 0) {
    local_18 = local_18 + -1;
    uVar9 = param_2;
    FUN_004d71e8(local_238,*(undefined4 **)(param_1 + 0x278));
    iVar6 = FUN_004d7210(local_238);
    FUN_004d7218(iVar6,uVar9);
  }
  return;
}

