// rea decompile_all
// name: FUN_004e64bc
// address: 0x4e64bc
// body: available
// range: 0x4e64bc-0x4e656b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004e64bc(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_0051c440 == DAT_0051c40c) {
    DAT_0051c40c = DAT_0051c40c + 0x10;
    DAT_0051c408 = FUN_004cc754();
    if (DAT_0051c408 == 0) {
      FUN_004e5f84((uint *)s_No_space_for_command_line_argume_00518c70);
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    FUN_004dc9f4(param_1);
    puVar1 = (uint *)FUN_004cc734();
    if (puVar1 == (uint *)0x0) {
      FUN_004e5f84((uint *)s_No_space_for_command_line_argume_00518c9a);
    }
    uVar2 = 0xffffffff;
    do {
      puVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar4 = (uint *)((int)param_1 + 1);
      uVar3 = *param_1;
      param_1 = puVar4;
    } while ((char)uVar3 != '\0');
    uVar2 = ~uVar2;
    puVar4 = (uint *)((int)puVar4 - uVar2);
    puVar5 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar5 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  *(uint **)(DAT_0051c408 + DAT_0051c440 * 4) = puVar1;
  DAT_0051c440 = DAT_0051c440 + 1;
  return;
}

