// rea decompile_all
// name: FUN_00485fac
// address: 0x485fac
// body: available
// range: 0x485fac-0x486057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00485fac(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  uint local_804 [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      (s_License_00503970,s_LicenseOwner_00503978,s_License_00503970 + 7,
                       (LPSTR)local_404,0x3ff,*(LPCSTR *)(param_1 + 8));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          (s_License_00503970,s_LicenseKey_00503985,s_License_00503970 + 7,
                           (LPSTR)local_804,0x3ff,*(LPCSTR *)(param_1 + 8)), DVar2 != 0)) {
      FUN_004cf41c(param_2,local_404);
      FUN_004cf41c(param_3,local_804);
      return 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

