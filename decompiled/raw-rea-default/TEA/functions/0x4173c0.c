// rea decompile_all
// name: FUN_004173c0
// address: 0x4173c0
// body: available
// range: 0x4173c0-0x41748c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004173c0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4edfa8);
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (*param_1 == 3) {
    param_1[2] = *(int *)(param_2 + 8) - (*(int *)(param_3 + 0x20) + *(int *)(param_3 + 0x28));
  }
  else if (*param_1 == 2) {
    param_1[2] = *(int *)(param_2 + 8) - *(int *)(param_1[4] + 0x20);
  }
  else if (*param_1 == 1) {
    uVar1 = *(int *)(param_2 + 8) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[2] = iVar2 - *(int *)(param_1[4] + 0x20);
  }
  if (param_1[1] == 3) {
    param_1[3] = *(int *)(param_2 + 0xc) -
                 (*(int *)(param_1[4] + 0x24) + *(int *)(param_1[4] + 0x2c));
  }
  else if (param_1[1] == 2) {
    param_1[3] = *(int *)(param_2 + 0xc) - *(int *)(param_1[4] + 0x24);
  }
  else if (param_1[1] == 1) {
    uVar1 = *(int *)(param_2 + 0xc) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[3] = iVar2 - *(int *)(param_1[4] + 0x24);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

