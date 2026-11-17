// rea decompile_all
// name: FUN_00485770
// address: 0x485770
// body: available
// range: 0x485770-0x4857f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00485770(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 4) = 0xb000000f;
  *(int *)(param_1 + 0xc) = *param_2 * -0x14;
  if (param_2[4] == 700) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  if ((char)param_2[5] != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x1b);
  uVar2 = 0xffffffff;
  piVar5 = param_2 + 7;
  do {
    piVar6 = piVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    piVar6 = (int *)((int)piVar5 + 1);
    iVar1 = *piVar5;
    piVar5 = piVar6;
  } while ((char)iVar1 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)piVar6 - uVar2);
  puVar7 = (undefined4 *)(param_1 + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return (undefined4 *)(param_1 + 0x1a);
}

