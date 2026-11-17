// rea decompile_all
// name: FUN_00490e60
// address: 0x490e60
// body: available
// range: 0x490e60-0x490eed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490e60(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_5[1] != 0) {
    piVar3 = param_4 + 1;
    if ((param_7 != 0) || (param_6 == 1)) {
      for (; (*piVar3 != 0 && (param_7 != *piVar3)); piVar3 = (int *)(*piVar3 + 0x3e)) {
      }
    }
    if ((param_6 == 1) && (*piVar3 != 0)) {
      piVar3 = (int *)(*piVar3 + 0x3e);
    }
    iVar2 = param_5[1];
    while (iVar1 = iVar2, iVar1 != 0) {
      (**(code **)(*param_5 + 0x14))();
      (**(code **)(*param_4 + 0x10))();
      param_1 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x3e);
    }
    *(int *)(param_1 + 0x3e) = *piVar3;
    *piVar3 = param_5[1];
    param_4[2] = param_4[2] + param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
  }
  return;
}

