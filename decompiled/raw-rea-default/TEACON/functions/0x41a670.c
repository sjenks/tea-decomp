// rea decompile_all
// name: FUN_0041a670
// address: 0x41a670
// body: available
// range: 0x41a670-0x41a6fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0041a670(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_00418cd4(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004197a4(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_004197a4(param_1);
      uVar5 = FUN_004197b0(param_1);
      uVar6 = FUN_004197b0(param_1);
      FUN_00418da8(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_004197a4(param_1);
    uVar3 = FUN_00418ce0(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_004197a4(param_1);
      uVar5 = FUN_00418cd4(param_1);
      uVar6 = FUN_004197bc(param_1);
      FUN_00418da8(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_00418ce0(param_1);
  iVar7 = FUN_00418cd4(param_1);
  return iVar1 - iVar7;
}

