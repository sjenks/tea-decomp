// rea decompile_all
// name: FUN_00406a2c
// address: 0x406a2c
// body: available
// range: 0x406a2c-0x407119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00406a2c(int *param_1,int param_2)

{
  short sVar1;
  char *pcVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  char cVar14;
  LPFILETIME p_Var15;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  short local_64;
  byte local_62;
  char local_61;
  int local_60;
  byte local_5c [3];
  char local_59;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  bVar13 = 0;
  FUN_0041f3fc(0x42ba04);
  param_1[0x801] = 0;
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  piVar11 = param_1;
  uVar5 = (**(code **)(*param_1 + 8))();
  if (param_2 == 0) {
    *in_FS_OFFSET = local_38;
    return local_38;
  }
  puVar6 = (uint *)(**(code **)(*param_1 + 0x18))(uVar5,*param_1,piVar11,param_1);
  local_40 = FUN_00420b40((LPCSTR)puVar6,&DAT_0042b445);
  if (local_40 == (int *)0x0) goto LAB_00406b50;
  p_Var15 = (LPFILETIME)(param_1 + 0x802);
  cVar14 = '\x01';
  local_28 = 8;
  FUN_00416e74((int)local_14,puVar6);
  local_1c = local_1c + 1;
  bVar3 = FUN_0040965c((int)local_14,cVar14,p_Var15);
  uVar8 = (uint)(CONCAT31(extraout_var,bVar3) == 0);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar11 = (int *)(local_c + -0xc);
      if (piVar11 == &DAT_0042fab4) {
        iVar7 = 1;
      }
      else if (piVar11 == &DAT_0042fab4) {
        iVar7 = 1;
      }
      else {
        *piVar11 = *piVar11 + -1;
        iVar7 = *piVar11 + 1;
      }
      if (iVar7 != 0) goto LAB_00406b4b;
    }
    local_4c = local_c + -0xc;
    local_50 = local_c + -0xc;
    FUN_00414f78();
    local_54 = 0;
    local_58 = local_14;
    local_c = 0;
  }
LAB_00406b4b:
  if (uVar8 == 0) {
    uVar8 = FUN_00420d9c((char *)local_5c,1,4,local_40);
    if ((uVar8 != 4) ||
       ((uVar8 = FUN_0041f04c(&DAT_0042bc20,local_5c,4), uVar8 != 0 &&
        (uVar8 = FUN_0041f04c((byte *)s_TSD1Nobody_0042bc24,local_5c,4), uVar8 != 0)))) {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    param_1[0x8ff] = local_59 + -0x30;
    uVar8 = FUN_00420d9c((char *)(param_1 + 0x903),2,1,local_40);
    if (uVar8 != 1) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar8 = 1000;
    if (param_1[0x8ff] == 0) {
      uVar8 = 0x50;
      piVar11 = param_1 + 0x9ce;
      for (uVar4 = 0; uVar4 < *(ushort *)(param_1 + 0x903); uVar4 = uVar4 + 1) {
        *piVar11 = -1;
        piVar11[0x65] = -1;
        piVar11[0xca] = 0;
        piVar11 = piVar11 + 1;
      }
      FUN_0041ee4c(param_1 + 0x900,0,0xc);
    }
    else {
      uVar9 = FUN_00420d9c((char *)(param_1 + 0x900),4,3,local_40);
      if ((((uVar9 != 3) ||
           (uVar9 = FUN_00420d9c((char *)(param_1 + 0x9ce),4,(uint)*(ushort *)(param_1 + 0x903),
                                 local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
          (uVar9 = FUN_00420d9c((char *)(param_1 + 0xa33),4,(uint)*(ushort *)(param_1 + 0x903),
                                local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
         (uVar9 = FUN_00420d9c((char *)(param_1 + 0xa98),4,(uint)*(ushort *)(param_1 + 0x903),
                               local_40), uVar9 != *(ushort *)(param_1 + 0x903))) {
        piVar11 = (int *)FUN_004207fc(local_40);
        *in_FS_OFFSET = local_38;
        return piVar11;
      }
    }
    uVar9 = FUN_00420d9c((char *)(param_1 + 0x904),4,(uint)*(ushort *)(param_1 + 0x903),local_40);
    if (((uVar9 != *(ushort *)(param_1 + 0x903)) ||
        (uVar9 = FUN_00420d9c((char *)(param_1 + 0x969),4,(uint)*(ushort *)(param_1 + 0x903),
                              local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
       (uVar9 = FUN_00420d9c((char *)(param_1 + 0x805),1,uVar8,local_40), uVar8 != uVar9)) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar8 = FUN_00420d9c((char *)(param_1 + 0xafd),2,1,local_40);
    if ((uVar8 != 1) ||
       (uVar8 = FUN_00420d9c((char *)((int)param_1 + 0x2bf6),2,1,local_40), uVar8 != 1)) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    sVar1 = (short)param_1[0xafd];
    if ((((sVar1 < 0) || (0xfd < sVar1)) || (*(short *)((int)param_1 + 0x2bf6) < 1)) ||
       ((0xfd < *(short *)((int)param_1 + 0x2bf6) || (*(short *)((int)param_1 + 0x2bf6) < sVar1))))
    {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    piVar11 = param_1 + 1;
    local_3c = 0;
    piVar12 = param_1 + 0xafe;
    do {
      *(undefined1 *)piVar12 = 0x21;
      *piVar11 = 0;
      piVar12 = (int *)((int)piVar12 + 1);
      piVar11[1] = 0xff;
      local_3c = local_3c + 1;
      piVar11 = piVar11 + 2;
    } while (local_3c < 0x100);
    piVar11 = param_1 + local_3c * 2 + 1;
    for (; local_3c < 0x300; local_3c = local_3c + 1) {
      *piVar11 = -1;
      piVar11[1] = -1;
      piVar11 = piVar11 + 2;
    }
    local_60 = 0x101;
    piVar11 = param_1 + 0xb3e;
    local_3c = 0;
    puVar6 = (uint *)(param_1 + 1);
    do {
      uVar8 = FUN_00420d9c(&local_61,1,1,local_40);
      if (((uVar8 != 1) || (uVar8 = FUN_00420d9c((char *)&local_62,1,1,local_40), uVar8 != 1)) ||
         ((uVar8 = FUN_00420d9c((char *)&local_64,2,1,local_40), uVar8 != 1 ||
          (uVar8 = FUN_00420d9c((char *)&local_68,4,1,local_40), uVar8 != 1)))) {
        FUN_004207fc(local_40);
        *in_FS_OFFSET = local_38;
        return local_38;
      }
      if (local_62 != 0) {
        iVar7 = 0x100;
        local_6c = (uint)local_62;
        while (1 < (int)local_6c) {
          if (param_1[iVar7 * 2 + 1] < 0) {
            param_1[iVar7 * 2 + 1] = local_60;
            local_60 = local_60 + 1;
          }
          if (param_1[iVar7 * 2 + 2] < 0) {
            param_1[iVar7 * 2 + 2] = local_60;
            local_60 = local_60 + 1;
          }
          iVar7 = param_1[iVar7 * 2 + (local_68 >> ((byte)(local_6c - 1) & 0x1f) & 1) + 1];
          local_6c = local_6c - 1;
        }
        param_1[iVar7 * 2 + (local_68 & 1) + 1] = local_3c;
        *puVar6 = (uint)local_62;
      }
      if (-1 < local_64) {
        puVar6[1] = (int)local_64;
        *(char *)((int)param_1 + local_64 + 0x2bf8) = local_61;
      }
      *(char *)piVar11 = local_61;
      local_3c = local_3c + 1;
      piVar11 = (int *)((int)piVar11 + 1);
      puVar6 = puVar6 + 2;
    } while (local_3c < 0x100);
    piVar11 = param_1 + 0x601;
    local_70 = 0;
    do {
      iVar10 = 0;
      local_74 = local_70;
      for (iVar7 = 0x100; (iVar10 < 8 && (0xff < iVar7)); iVar7 = param_1[iVar7 * 2 + uVar8 + 1]) {
        uVar8 = local_74 & 1;
        iVar10 = iVar10 + 1;
        local_74 = (int)local_74 >> 1;
      }
      *piVar11 = iVar7;
      piVar11[0x100] = param_1[iVar7 * 2 + 1];
      local_70 = local_70 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)local_70 < 0x100);
    uVar8 = FUN_00420d9c((char *)(param_1 + 0xb7e),2,1,local_40);
    if (uVar8 != 1) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    iVar7 = FUN_0041503c();
    param_1[0xb7f] = iVar7;
    if (iVar7 == 0) {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    for (iVar7 = 0; iVar7 < (int)(uint)*(ushort *)(param_1 + 0xb7e); iVar7 = iVar7 + 1) {
      uVar5 = FUN_0041503c();
      *(undefined4 *)(param_1[0xb7f] + iVar7 * 4) = uVar5;
    }
    iVar7 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(param_1 + 0xb7e) <= iVar7) {
        piVar11 = (int *)FUN_004207fc(local_40);
        param_1[0x801] = 1;
        *in_FS_OFFSET = local_38;
        return piVar11;
      }
      pcVar2 = *(char **)(param_1[0xb7f] + iVar7 * 4);
      if ((pcVar2 == (char *)0x0) ||
         (uVar8 = FUN_00420d9c(pcVar2,1,(int)(short)param_1[0xafd],local_40),
         uVar8 != (int)(short)param_1[0xafd])) break;
      iVar7 = iVar7 + 1;
    }
    piVar11 = (int *)FUN_004207fc(local_40);
    *in_FS_OFFSET = local_38;
    return piVar11;
  }
LAB_00406b50:
  piVar11 = (int *)s____DICTIONARY_FILE_NOT_FOUND____0042b448;
  piVar12 = param_1 + 0x805;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  *in_FS_OFFSET = local_38;
  return param_1 + 0x805;
}

