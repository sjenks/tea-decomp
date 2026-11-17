// rea decompile_all
// name: FUN_004aa150
// address: 0x4aa150
// body: available
// range: 0x4aa150-0x4aa22f inclusive
// range: 0x4aa85f-0x4aa889 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004aa150(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  FUN_004dce64(0x50bbf4);
  *(undefined4 *)(param_1 + 0x16) = 0;
  while (*(char *)(param_1 + 0x15) == '\0') {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x14))();
    if (cVar2 == '\0') {
      DVar3 = MsgWaitForMultipleObjects
                        (*(DWORD *)(param_1 + 0x45),*(HANDLE **)(param_1 + 0x49),0,0xffffffff,0xff);
      if (DVar3 < *(uint *)(param_1 + 0x45)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
      else if ((0x7f < DVar3) && (DVar3 < *(int *)(param_1 + 0x45) + 0x80U)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
    }
    FUN_00498d7c((int *)(param_1 + 0x11));
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x16);
  *in_FS_OFFSET = local_7c;
  return uVar1;
}

