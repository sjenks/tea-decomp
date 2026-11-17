// rea decompile_all
// name: FUN_004235ac
// address: 0x4235ac
// body: available
// range: 0x4235ac-0x4237cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004235ac(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  byte local_204 [256];
  char local_104 [256];
  
  uVar10 = 0;
  FUN_0041ee4c((undefined4 *)local_104,0,0x100);
  iVar3 = 0;
  do {
    if (*param_2 == '\0') {
      uVar5 = FUN_00422dec(param_1,local_204);
      param_1[1] = uVar5;
      BVar6 = IsValidLocale(param_1[1],1);
      if ((BVar6 == 0) && (param_1[2] == 0)) {
        SetLastError(0x20000103);
        uVar7 = 0;
      }
      else {
        SetThreadLocale(*(LCID *)(PTR_DAT_0043330c + 4));
        FUN_00423200((int)PTR_DAT_0043330c);
        iVar3 = FUN_00423044((uint *)PTR_DAT_0043330c,uVar10);
        if (iVar3 == 0) {
          SetLastError(0x20000102);
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
        }
      }
      return uVar7;
    }
    if (*param_2 == '=') {
      pcVar4 = local_104;
      pcVar9 = s_LC_CTYPE_00433194;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00423610;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00423610;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 2;
      }
LAB_00423610:
      pcVar4 = local_104;
      pcVar9 = s_LC_TIME_0043319d;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0042363d;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0042363d;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x20;
      }
LAB_0042363d:
      pcVar4 = local_104;
      pcVar9 = s_LC_NUMERIC_004331a5;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0042366a;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0042366a;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x10;
      }
LAB_0042366a:
      pcVar4 = local_104;
      pcVar9 = s_LC_MONETARY_004331b0;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00423697;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00423697;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 4;
      }
LAB_00423697:
      pcVar4 = local_104;
      pcVar9 = s_LC_COLLATE_004331bc;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004236c4;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004236c4;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 1;
      }
LAB_004236c4:
      FUN_0041ee4c((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else if (*param_2 == '\n') {
      uVar5 = 0xffffffff;
      pcVar4 = local_104;
      do {
        pcVar9 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pbVar11 = (byte *)(pcVar9 + -uVar5);
      pbVar12 = local_204;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar12 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      FUN_0041ee4c((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else {
      local_104[iVar3] = *param_2;
      iVar3 = iVar3 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}

