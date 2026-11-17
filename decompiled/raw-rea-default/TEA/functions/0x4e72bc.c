// rea decompile_all
// name: FUN_004e72bc
// address: 0x4e72bc
// body: available
// range: 0x4e72bc-0x4e744b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_004e72bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_8;
  
  if ((param_1 < 0x46) || (0x8a < param_1)) {
    local_8 = -1;
  }
  else {
    iVar6 = param_5 + param_6 / 0x3c;
    iVar4 = param_4 + iVar6 / 0x3c;
    uVar8 = param_3 + iVar4 / 0x18;
    uVar5 = iVar4 % 0x18;
    uVar9 = param_1 + param_2 / 0xc;
    pcVar1 = &DAT_00518e90 + param_2 % 0xc;
    iVar4 = param_2 % 0xc;
    while (iVar7 = iVar4, pcVar3 = pcVar1, (int)*pcVar3 <= (int)uVar8) {
      if (((uVar9 & 3) == 0) && (iVar7 == 1)) {
        if ((int)uVar8 < 0x1d) break;
        iVar4 = -0x1d;
      }
      else {
        iVar4 = -(int)*pcVar3;
      }
      uVar8 = uVar8 + iVar4;
      pcVar1 = pcVar3 + 1;
      iVar4 = iVar7 + 1;
      if (0xb < iVar7 + 1) {
        uVar9 = uVar9 + 1;
        pcVar1 = pcVar3 + -0xb;
        iVar4 = iVar7 + -0xb;
      }
    }
    iVar4 = uVar9 - 0x44;
    if (iVar4 < 0) {
      iVar4 = uVar9 - 0x41;
    }
    iVar4 = iVar4 >> 2;
    if (((uVar9 & 3) == 0) && (iVar7 < 2)) {
      iVar4 = iVar4 + -1;
    }
    local_8 = (iVar4 + (uVar9 - 0x46) * 0x16d + (&DAT_00518e9c)[iVar7] + uVar8) * 0x15180 +
              uVar5 * 0xe10 + (iVar6 % 0x3c) * 0x3c + param_6 % 0x3c + DAT_00518fb4;
    if (param_7 == -1) {
      if ((DAT_00518fb8 != 0) &&
         (bVar2 = FUN_004e71a8(uVar5,uVar8,iVar7 + 1,uVar9 - 0x46),
         CONCAT31(extraout_var,bVar2) != 0)) {
        local_8 = local_8 + -0xe10;
      }
    }
    else {
      if (param_7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xe10;
      }
      local_8 = local_8 - iVar6;
    }
    if (local_8 < 1) {
      local_8 = -1;
    }
  }
  return local_8;
}

