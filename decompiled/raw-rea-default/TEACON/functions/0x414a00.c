// rea decompile_all
// name: FUN_00414a00
// address: 0x414a00
// body: available
// range: 0x414a00-0x414a80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00414a00(byte param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int local_c;
  
  local_c = 0;
  do {
    bVar1 = *param_2;
    uVar5 = 0;
    iVar2 = 7;
    pbVar3 = param_2 + 7;
    do {
      uVar5 = (uint)*pbVar3 * 2 + (uint)(uVar5 != 0);
      iVar2 = iVar2 + -1;
      *pbVar3 = (byte)uVar5;
      pbVar3 = pbVar3 + -1;
      uVar5 = uVar5 & 0x100;
    } while (-1 < iVar2);
    if (((bVar1 ^ param_1) & 0x80) != 0) {
      iVar2 = 0;
      pbVar3 = param_3;
      pbVar4 = param_2;
      do {
        *pbVar4 = *pbVar4 ^ *pbVar3;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar2 < 8);
    }
    param_1 = param_1 << 1;
    local_c = local_c + 1;
  } while (local_c < 8);
  return;
}

