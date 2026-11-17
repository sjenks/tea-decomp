// rea decompile_all
// name: FUN_004a7aa0
// address: 0x4a7aa0
// body: available
// range: 0x4a7aa0-0x4a7b20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl
FUN_004a7aa0(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  BOOL BVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((param_7 & 2) == 0) {
      *(int *)(param_1 + 0x20) = param_3;
      *(int *)(param_1 + 0x24) = param_4;
    }
    if ((param_7 & 1) == 0) {
      *(int *)(param_1 + 0x28) = param_5;
      *(int *)(param_1 + 0x2c) = param_6;
    }
    if ((param_7 & 0x40) == 0) {
      if ((param_7 & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    BVar1 = SetWindowPos(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

