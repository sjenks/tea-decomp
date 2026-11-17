// rea decompile_all
// name: FUN_0043ffd0
// address: 0x43ffd0
// body: available
// range: 0x43ffd0-0x44007f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0043ffd0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_004dce64(0x4f5fa8);
  iVar2 = param_2;
  while (local_8 = iVar2, local_8 != param_3) {
    iVar2 = local_8 + 0x38;
    if (local_8 != 0) {
      local_1c = 0x14;
      local_10 = local_10 + -2;
      if (*(int *)(local_8 + 0x24) != 0) {
        local_30 = *(undefined4 *)(local_8 + 0x24);
        FUN_004400a0(local_40,local_8,in_stack_ffffff94,in_stack_ffffff98,
                     *(int *)(*(int *)(local_8 + 0x24) + 8));
        iVar1 = *(int *)(local_8 + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(local_8 + 0x18);
        *(int *)(local_8 + 0x18) = iVar1;
        FUN_00440cc8(local_8);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

