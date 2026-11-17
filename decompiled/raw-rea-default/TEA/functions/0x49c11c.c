// rea decompile_all
// name: FUN_0049c11c
// address: 0x49c11c
// body: available
// range: 0x49c11c-0x49c251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049c11c(undefined4 *param_1)

{
  HDC pHVar1;
  HFONT pHVar2;
  HGDIOBJ pvVar3;
  uint uVar4;
  uint uVar5;
  int c;
  tagTEXTMETRICA *ptVar6;
  CHAR *lpName;
  tagTEXTMETRICA local_7c;
  LOGFONTA local_44;
  uint local_8;
  
  GetObjectA(*(HANDLE *)((int)param_1 + 0x39),0x3c,&local_44);
  ptVar6 = &local_7c;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetTextMetricsA(pHVar1,ptVar6);
  local_44.lfHeight = local_7c.tmHeight;
  if (-1 < local_7c.tmHeight) {
    local_44.lfHeight = -(local_7c.tmHeight - local_7c.tmInternalLeading);
  }
  local_44.lfWidth = local_7c.tmAveCharWidth;
  local_44.lfWeight = local_7c.tmWeight;
  local_44.lfItalic = local_7c.tmItalic;
  local_44.lfUnderline = local_7c.tmUnderlined;
  local_44.lfStrikeOut = local_7c.tmStruckOut;
  local_44.lfCharSet = local_7c.tmCharSet;
  local_44.lfOutPrecision = '\x04';
  local_44.lfClipPrecision = '\0';
  local_44.lfQuality = '\x01';
  local_44.lfPitchAndFamily = local_7c.tmPitchAndFamily & 3;
  lpName = local_44.lfFaceName;
  c = 0x20;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetTextFaceA(pHVar1,c,lpName);
  pHVar2 = CreateFontIndirectA(&local_44);
  pvVar3 = SelectObject((HDC)*param_1,pHVar2);
  DeleteObject(pvVar3);
  ptVar6 = &local_7c;
  pHVar1 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  GetTextMetricsA(pHVar1,ptVar6);
  if (-1 < local_7c.tmHeight) {
    local_7c.tmHeight = -(local_7c.tmHeight - local_7c.tmInternalLeading);
  }
  uVar4 = ((local_44.lfHeight ^ local_44.lfHeight >> 0x1f) - (local_44.lfHeight >> 0x1f)) -
          ((local_7c.tmHeight ^ local_7c.tmHeight >> 0x1f) - (local_7c.tmHeight >> 0x1f));
  uVar5 = (int)uVar4 >> 0x1f;
  if (2 < (int)((uVar4 ^ uVar5) - uVar5)) {
    if ((local_44.lfPitchAndFamily & 0x50) == 0) {
      local_44.lfPitchAndFamily = '\0';
    }
    else {
      local_44.lfPitchAndFamily = 'P';
    }
    local_44.lfFaceName[0] = '\0';
    local_8 = local_7c.tmHeight;
    pHVar2 = CreateFontIndirectA(&local_44);
    pvVar3 = SelectObject((HDC)*param_1,pHVar2);
    DeleteObject(pvVar3);
  }
  return;
}

