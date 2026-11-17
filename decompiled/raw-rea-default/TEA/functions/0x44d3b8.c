// rea decompile_all
// name: FUN_0044d3b8
// address: 0x44d3b8
// body: available
// range: 0x44d3b8-0x44d44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_0044d3b8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  code *in_stack_0000001c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  while( true ) {
    while (cVar1 = (*in_stack_0000001c)(), cVar1 != '\0') {
      param_1 = param_1 + 4;
    }
    do {
      param_2 = param_2 + -4;
      cVar1 = (*in_stack_0000001c)();
    } while (cVar1 != '\0');
    if (param_2 <= param_1) break;
    local_8 = param_2;
    local_c = param_1;
    local_1c = *param_1;
    local_18 = param_1[1];
    local_14 = param_1[2];
    puVar3 = param_2;
    puVar4 = param_1;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    puVar3 = &local_1c;
    puVar4 = param_2;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    param_1 = param_1 + 4;
  }
  return param_1;
}

