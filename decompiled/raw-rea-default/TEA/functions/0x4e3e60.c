// rea decompile_all
// name: FUN_004e3e60
// address: 0x4e3e60
// body: available
// range: 0x4e3e60-0x4e3ecc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004e3e60(undefined4 param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  double local_c;
  
  if ((short)(param_2._2_2_ * 2) == 0) {
    iVar2 = 2;
    local_c = -_DAT_005189b8;
    pdVar1 = &local_c;
  }
  else if (param_2 < 0) {
    iVar2 = 1;
    pdVar1 = (double *)&DAT_00518a38;
  }
  else {
    if ((short)(param_2._2_2_ * 2) != -0x20) {
      FUN_004e3bac();
      return;
    }
    iVar2 = 3;
    pdVar1 = (double *)&DAT_005189b8;
  }
  FUN_004e3798(iVar2,&DAT_00518a40,(undefined8 *)&param_1,(undefined8 *)0x0,*(undefined4 *)pdVar1,
               *(undefined4 *)((int)pdVar1 + 4));
  return;
}

