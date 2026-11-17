// rea decompile_all
// name: FUN_0048d600
// address: 0x48d600
// body: available
// range: 0x48d600-0x48d6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0048d600(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  *param_4 = ((iVar1 + -0x1a431f) * 4 - 1U) / 0x23ab1;
  uVar3 = (iVar1 + -0x1a431f) * 4 + -1 + *param_4 * -0x23ab1 >> 2;
  uVar2 = (uVar3 * 4 + 3) / 0x5b5;
  uVar3 = uVar3 * 4 + uVar2 * -0x5b5 + 7 >> 2;
  *param_2 = (uVar3 * 5 - 3) / 0x99;
  *param_3 = (uVar3 * 5 + *param_2 * -0x99 + 2) / 5;
  *param_4 = uVar2 + *param_4 * 100;
  if (*param_2 < 10) {
    *param_2 = *param_2 + 3;
  }
  else {
    *param_2 = *param_2 - 9;
    *param_4 = *param_4 + 1;
  }
  return;
}

