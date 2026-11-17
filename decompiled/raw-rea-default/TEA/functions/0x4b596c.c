// rea decompile_all
// name: FUN_004b596c
// address: 0x4b596c
// body: available
// range: 0x4b596c-0x4b5a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b596c(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + 0x26);
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    if (param_2 == *piVar2) break;
    piVar2 = (int *)(*piVar2 + 0x14);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x54))();
  *piVar2 = *(int *)(param_2 + 0x14);
  FUN_004b5ab0((int)param_1,2,param_2,(undefined4 *)param_2);
  if (*(int *)((int)param_1 + 0x26) != 0) {
    FUN_004b57a4((int)param_1);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x22) == 0) {
    return 0;
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) == 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 8) == 0)) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))();
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) != 0) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}

