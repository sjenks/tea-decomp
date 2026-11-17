// rea decompile_all
// name: FUN_0044e39c
// address: 0x44e39c
// body: available
// range: 0x44e39c-0x44e418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0044e39c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  FUN_004dce64(0x4f72fc);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_004400a0(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_00440cc8(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

