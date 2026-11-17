// rea decompile_all
// name: FUN_004a7b24
// address: 0x4a7b24
// body: available
// range: 0x4a7b24-0x4a7b8a inclusive
// range: 0x4a7bb3-0x4a7bf8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004a7b24(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  if (DAT_0050ab90 == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      switch(param_2) {
      case 0:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
        break;
      case 1:
      case 9:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xdeffffff;
        break;
      case 2:
      case 6:
      case 7:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
        break;
      case 3:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
        break;
      case 4:
      case 5:
      case 8:
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
      }
      bVar3 = true;
    }
    else if (param_2 == 6) {
      iVar1 = FUN_004a6094(param_1,0x112,0xf020,0);
      bVar3 = iVar1 != 0;
    }
    else {
      BVar2 = ShowWindow(*(HWND *)(param_1 + 0xc),param_2);
      bVar3 = BVar2 != 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

