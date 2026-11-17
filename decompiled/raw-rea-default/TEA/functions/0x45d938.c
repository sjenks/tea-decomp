// rea decompile_all
// name: FUN_0045d938
// address: 0x45d938
// body: available
// range: 0x45d938-0x45d9e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045d938(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((undefined4 *)(param_1 + 0x800),(undefined4 *)(iVar1 + 0x70));
  FUN_0041e940((undefined4 *)(param_1 + 0x844),(undefined4 *)(iVar1 + 0xb0));
  uVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar3) break;
    iVar2 = *(int *)(*(int *)(uVar3 * 4 + *(int *)(param_1 + 0x6b4)) + 8);
    FUN_0042dbdc(iVar2,(undefined4 *)(param_1 + 0x800),(undefined4 *)(param_1 + 0x844),
                 *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0xb0));
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x24))();
    uVar3 = uVar3 + 1;
  }
  return;
}

