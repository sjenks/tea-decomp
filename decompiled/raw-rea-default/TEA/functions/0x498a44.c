// rea decompile_all
// name: FUN_00498a44
// address: 0x498a44
// body: available
// range: 0x498a44-0x498ac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00498a44(int *param_1,int param_2)

{
  SHORT SVar1;
  
  FUN_0048fe44(param_1,param_2);
  SVar1 = GetKeyState(param_1[0x18]);
  if ((((param_1[0x18] == 0x91) || (param_1[0x18] == 0x2d)) || (param_1[0x18] == 0x90)) ||
     (param_1[0x18] == 0x14)) {
    if (((int)SVar1 & 1U) == 0) {
      (**(code **)(*param_1 + 4))();
    }
    else {
      (**(code **)(*param_1 + 4))();
    }
  }
  else if (((int)SVar1 & 0x80000000U) == 0) {
    (**(code **)(*param_1 + 4))();
  }
  else {
    (**(code **)(*param_1 + 4))();
  }
  return 0;
}

