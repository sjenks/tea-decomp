// name: FUN_00459634
// address: 0x459634
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00459634(int *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  LANGID LVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte local_68 [64];
  CHAR local_28 [8];
  char *local_20;
  byte *local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  LCID local_8;
  
  local_10 = 1;
  local_14 = 0;
  uVar9 = 1;
  puVar10 = &DAT_004756c4;
  pbVar5 = local_68;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar5 = pbVar5 + 4;
  }
  bVar2 = false;
  local_18 = DAT_00475704;
  FUN_0045aa5c(param_2);
  while ((!bVar2 && ((int)uVar9 < 0x39))) {
    local_8 = (LCID)(ushort)((ushort)uVar9 | 0x400);
    GetLocaleInfoA(local_8,0x1001,(LPSTR)local_68,0x40);
    GetLocaleInfoA(local_8,3,(LPSTR)&local_18,4);
    FUN_0045aa5c(local_68);
    FUN_0045aa5c((byte *)&local_18);
    pcVar4 = FUN_00455e58((char *)param_2,(char *)local_68);
    if (pcVar4 == (char *)0x0) {
      pbVar5 = (byte *)FUN_00455e58((char *)param_2,(char *)&local_18);
      if (param_2 == pbVar5) {
        bVar2 = true;
      }
      else {
        uVar9 = uVar9 + 1;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (((bVar2) || (pcVar4 = FUN_00455b20((char *)param_2,'_'), pcVar4 != (char *)0x0)) ||
     (pcVar4 = FUN_00455b20((char *)param_2,'.'), pcVar4 != (char *)0x0)) {
    if (!bVar2) {
      if (param_1[1] == 0) {
        LVar3 = GetSystemDefaultLangID();
        uVar9 = (uint)LVar3;
      }
      else {
        uVar9 = param_1[1] & 0x3ff;
      }
    }
    pcVar4 = FUN_00455b20((char *)param_2,'_');
    uVar8 = (ushort)uVar9;
    if (pcVar4 == (char *)0x0) {
      local_14 = (uint)(uVar8 | 0x400);
      local_1c = (byte *)0x0;
    }
    else {
      local_1c = (byte *)(pcVar4 + 1);
      local_20 = FUN_00455b20((char *)local_1c,'.');
      if (local_20 != (char *)0x0) {
        *local_20 = '\0';
      }
      local_c = 1;
      bVar2 = false;
      while ((!bVar2 && (local_c != 0))) {
        local_c = GetLocaleInfoA((uint)(ushort)((short)local_10 << 10 | uVar8),0x1002,
                                 (LPSTR)local_68,0x40);
        FUN_0045aa5c(local_68);
        pbVar5 = local_68;
        pbVar7 = local_1c;
        do {
          if (*pbVar5 != *pbVar7) goto LAB_004597ff;
          bVar11 = true;
          if (*pbVar5 == 0) break;
          pbVar1 = pbVar5 + 1;
          if (*pbVar1 != pbVar7[1]) goto LAB_004597ff;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
          bVar11 = *pbVar1 == 0;
        } while (!bVar11);
        if (bVar11) {
          bVar2 = true;
          local_14 = (uint)(ushort)((short)local_10 << 10 | uVar8);
        }
        else {
LAB_004597ff:
          local_10 = local_10 + 1;
        }
      }
      if (!bVar2) {
        SetLastError(0x20000101);
        return 0;
      }
      if (local_20 != (char *)0x0) {
        *local_20 = '.';
      }
    }
    local_1c = (byte *)FUN_00455b20((char *)param_2,'.');
    if (local_1c == (byte *)0x0) {
      GetLocaleInfoA(local_14,0xb,local_28,7);
      iVar6 = FUN_0045b3a0(local_28);
      *param_1 = iVar6;
    }
    else {
      local_1c = local_1c + 1;
      iVar6 = FUN_0045b3a0((char *)local_1c);
      *param_1 = iVar6;
    }
  }
  else {
    SetLastError(0x20000101);
    local_14 = 0;
  }
  return local_14;
}

