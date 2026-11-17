// rea decompile_all
// name: FUN_004e5b88
// address: 0x4e5b88
// body: available
// range: 0x4e5b88-0x4e5c46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004e5b88(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = param_3 + -1;
    bVar1 = *pbVar2;
    param_1 = pbVar2 + 1;
    if (((&DAT_0051c1d9)[bVar1] & 4) == 0) {
      uVar4 = FUN_004e3054((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      if (*param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)CONCAT11(bVar1,*param_1);
        param_1 = pbVar2 + 2;
      }
    }
    bVar1 = *pbVar3;
    param_2 = pbVar3 + 1;
    if (((&DAT_0051c1d9)[bVar1] & 4) == 0) {
      uVar5 = FUN_004e3054((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = param_3 + -2;
      if (*param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)CONCAT11(bVar1,*param_2);
        param_2 = pbVar3 + 2;
      }
    }
    if (uVar5 != uVar4) break;
    pbVar2 = param_1;
    pbVar3 = param_2;
    param_3 = iVar6;
    if (uVar4 == 0) {
      return 0;
    }
  }
  if (uVar5 <= uVar4) {
    return 1;
  }
  return 0xffffffff;
}

