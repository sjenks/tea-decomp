// rea decompile_all
// name: FUN_004da4f8
// address: 0x4da4f8
// body: available
// range: 0x4da4f8-0x4da5bd inclusive
// range: 0x4da5c9-0x4da602 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_004da4f8(LPCSTR param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x516538);
  piVar1 = (int *)FUN_004cc0f0();
  if ((piVar1 == (int *)0x0) || (FUN_004da038(piVar1,param_1), *piVar1 == 0)) {
    if (piVar1 != (int *)0x0) {
      FUN_004da158(piVar1,3);
    }
    piVar1 = (int *)0xffffffff;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = 0;
    for (piVar2 = DAT_0051bbf0; *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == DAT_0051bbf4) {
      FUN_004d2bd0((int *)&DAT_0051bbf0,DAT_0051bbf4 * 2,0);
    }
    DAT_0051bbf0[iVar3] = (int)piVar1;
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

