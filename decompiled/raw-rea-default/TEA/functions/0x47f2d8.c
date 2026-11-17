// rea decompile_all
// name: FUN_0047f2d8
// address: 0x47f2d8
// body: available
// range: 0x47f2d8-0x47f345 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0047f2d8(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint3 in_ECX;
  undefined1 *puVar4;
  undefined4 uStack_8;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    uStack_8 = (uint)in_ECX;
    FUN_0047f348(param_1,*(undefined1 **)(param_1 + 8),
                 param_2 - ((int)*(undefined1 **)(param_1 + 8) - *(int *)(param_1 + 4)),
                 (undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 8);
    if (param_2 < (uint)((int)puVar1 - *(int *)(param_1 + 4))) {
      puVar4 = (undefined1 *)(*(int *)(param_1 + 4) + param_2);
      puVar3 = FUN_0047f6cc(puVar1,puVar1,puVar4);
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - ((int)puVar1 - (int)puVar4);
      FUN_0047c9bc(param_1,(int)puVar3,iVar2);
    }
  }
  return;
}

