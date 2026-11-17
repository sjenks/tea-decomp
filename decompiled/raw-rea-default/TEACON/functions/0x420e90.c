// rea decompile_all
// name: FUN_00420e90
// address: 0x420e90
// body: available
// range: 0x420e90-0x420f0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD __cdecl FUN_00420e90(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),0,1);
  if (DVar1 != 0xffffffff) {
    if ((int)param_1[2] < 0) {
      DVar2 = DVar1;
      if ((*(byte *)((int)&DAT_0043252c + *(char *)((int)param_1 + 0x16) * 4 + 1) & 8) != 0) {
        DVar2 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),0,2);
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar1 = FUN_0042010c((int)*(char *)((int)param_1 + 0x16),DVar1,0);
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_00420dd0(param_1);
      DVar1 = DVar2 + iVar3;
    }
    else {
      iVar3 = FUN_00420dd0(param_1);
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}

