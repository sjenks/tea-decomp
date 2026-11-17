// rea decompile_all
// name: FUN_004309cc
// address: 0x4309cc
// body: available
// range: 0x4309cc-0x430a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004309cc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (2 < (int)param_3) {
    uVar1 = FUN_0043c6a4((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    uVar2 = FUN_0043c6a4((byte *)(param_2 + 9),(uint)*(byte *)(param_2 + 8));
    if (uVar2 != uVar1) {
      if ((int)param_3 < 5) {
        return uVar1 < uVar2;
      }
      return uVar2 < uVar1;
    }
  }
  iVar3 = FUN_0043c624((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),(byte *)(param_2 + 9),
                       (uint)*(byte *)(param_2 + 8));
  if ((param_3 & 1) == 0) {
    bVar4 = 0 < iVar3;
  }
  else {
    bVar4 = iVar3 < 0;
  }
  return bVar4;
}

