// rea decompile_all
// name: FUN_004c93c0
// address: 0x4c93c0
// body: available
// range: 0x4c93c0-0x4c948c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c93c0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  FUN_004c8c78(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&param_3->left,1,1);
  }
  iVar1 = param_3->right - param_3->left;
  iVar2 = iVar1 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 4;
  }
  local_18 = ((param_3->bottom - param_3->top) + 2) / 3 + param_3->top;
  local_10 = param_3->left + (iVar2 >> 2);
  local_1c = (int)(iVar1 + 1U) >> 1;
  if (local_1c < 0) {
    local_1c = local_1c + (uint)((iVar1 + 1U & 1) != 0);
  }
  local_1c = local_1c + local_10;
  local_c = local_18;
  for (; local_10 < local_1c; local_10 = local_10 + 1) {
    MoveToEx((HDC)*param_2,local_10,local_c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,local_1c,local_18);
    local_c = local_c + 1;
    local_1c = local_1c + -1;
    local_18 = local_18 + 1;
  }
  return;
}

