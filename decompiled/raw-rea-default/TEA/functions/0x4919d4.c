// rea decompile_all
// name: FUN_004919d4
// address: 0x4919d4
// body: available
// range: 0x4919d4-0x491a56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004919d4(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != *(char *)((int)param_1 + 0x35)) || ((char)param_1[0xd] != '\0')) {
    if (param_2 != *(char *)((int)param_1 + 0x35)) {
      uVar1 = *(undefined1 *)((int)param_1 + 0x31);
      *(undefined1 *)((int)param_1 + 0x31) = *(undefined1 *)((int)param_1 + 0x32);
      *(undefined1 *)((int)param_1 + 0x32) = uVar1;
      *(char *)((int)param_1 + 0x35) = (char)param_2;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    piVar3 = param_1;
    uVar2 = FUN_00491968(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar2,param_1[6],piVar3,param_1);
  }
  return;
}

