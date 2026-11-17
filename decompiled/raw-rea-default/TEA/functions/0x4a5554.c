// rea decompile_all
// name: FUN_004a5554
// address: 0x4a5554
// body: available
// range: 0x4a5554-0x4a55cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004a5554(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
  }
  if (iVar4 != 0) {
    do {
      if ((param_2 == 0) || ((*(byte *)(iVar4 + 0x75) & 0x10) != 0)) {
        cVar1 = (**(code **)(*(int *)(iVar4 + 8) + 0x2c))();
        if (cVar1 == '\0') {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0xffffefff;
        }
        else {
          *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) | 0x1000;
          uVar3 = 1;
        }
      }
      iVar4 = *(int *)(iVar4 + 0x7e);
      if (iVar4 == 0) {
        return uVar3;
      }
      if (*(int *)(param_1 + 0x7a) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
      }
    } while (iVar4 != iVar2);
  }
  return uVar3;
}

