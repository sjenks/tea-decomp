// rea decompile_all
// name: FUN_004c52b0
// address: 0x4c52b0
// body: available
// range: 0x4c52b0-0x4c535d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char local_18;
  char local_17;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((*(char *)(param_1 + 0x15) == '\0') || (*(int *)(param_1 + 0x16) != 0)) ||
        (*(int *)(param_1 + 0x1a) != 0)) ||
       ((*(int *)(param_1 + 0x1e) != *(int *)(param_1 + 0x26) ||
        (*(int *)(param_1 + 0x22) != *(int *)(param_1 + 0x2a))))) {
      if ((*(uint *)(param_1 + 0x11) & 3) == 1) {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffc | 1;
      }
      else {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 2;
    }
  }
  else {
    local_16 = 0;
    local_12 = 0;
    local_e = 0;
    local_a = 0;
    Escape((HDC)*param_2,0x18,0x12,(LPCSTR)0x0,&local_18);
    uVar1 = (uint)(local_18 != '\0');
    if (local_17 != '\0') {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x11) = uVar1 | *(uint *)(param_1 + 0x11) & 0xfffffffc;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

