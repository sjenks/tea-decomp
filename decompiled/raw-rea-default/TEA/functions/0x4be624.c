// rea decompile_all
// name: FUN_004be624
// address: 0x4be624
// body: available
// range: 0x4be624-0x4be711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004be624(int *param_1)

{
  BOOL BVar1;
  HICON hIcon;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  HDC local_6c [26];
  
  FUN_004dce64(0x50fa14);
  BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
  if ((BVar1 == 0) || ((*(int *)((int)param_1 + 0x2e) == 0 && (*(int *)((int)param_1 + 0x15) == 0)))
     ) {
    FUN_004a6a30(*param_1);
  }
  else {
    FUN_0049af8c((int *)local_6c,*(HWND *)(*param_1 + 0xc));
    if (*(int *)((int)param_1 + 0x2e) == 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x54))();
    }
    else {
      FUN_004a76a8(*param_1,0x27,(WPARAM)local_6c[0],0);
      if (*(int *)((int)param_1 + 0x42) == 0) {
        hIcon = FUN_004bd700();
      }
      else {
        hIcon = *(HICON *)((int)param_1 + 0x42);
      }
      DrawIcon(local_6c[0],0,0,hIcon);
    }
    FUN_0049b014((int *)local_6c,2);
  }
  *in_FS_OFFSET = local_90;
  return;
}

