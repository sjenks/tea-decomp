// rea decompile_all
// name: FUN_004c6ea0
// address: 0x4c6ea0
// body: available
// range: 0x4c6ea0-0x4c6eb9 inclusive
// range: 0x4c6eda-0x4c6fef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c6ea0(int *param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 1:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 2:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 3:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 4:
    if (0x7fff < param_1[4]) {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[4]) % 0x7fff,0x7fff,param_1,
                 (param_3 * param_1[4]) / 0x7fff,param_1[3]);
      return;
    }
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 7:
    (**(code **)(*param_1 + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    if (param_1[4] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[4]) % 0x7fff,0x7fff,param_1,
                 (param_3 * param_1[4]) / 0x7fff,param_1[3]);
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x3b) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x54))();
  return;
}

