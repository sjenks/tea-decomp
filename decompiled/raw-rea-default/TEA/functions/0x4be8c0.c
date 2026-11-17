// rea decompile_all
// name: FUN_004be8c0
// address: 0x4be8c0
// body: available
// range: 0x4be8c0-0x4be962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004be8c0(int *param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  BOOL BVar2;
  
  if (param_2 == 2) {
    if ((*(int *)((int)param_1 + 0x15) != 0) &&
       (*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3)) {
      PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
    }
    LVar1 = FUN_004a614c(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 != 0) {
      *(uint *)(LVar1 + 0x74) = *(uint *)(LVar1 + 0x74) & 0xffffffdf;
    }
  }
  else if ((((param_2 == 5) && ((*(byte *)(*param_1 + 0x74) & 8) != 0)) &&
           (*(int *)((int)param_1 + 0x15) != 0)) &&
          ((*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3 &&
           (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)))) {
    FUN_004be9dc(param_1,'\x01');
  }
  FUN_004a5774(*param_1);
  return;
}

