// rea decompile_all
// name: FUN_0045e4dc
// address: 0x45e4dc
// body: available
// range: 0x45e4dc-0x45e599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0045e4dc(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 1) {
    iVar2 = 0x26;
  }
  else {
    iVar2 = 0x28;
  }
  iVar3 = param_1[0x1b4];
  while( true ) {
    if (iVar3 < 0) {
      return 0;
    }
    iVar1 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar3) break;
    iVar2 = FUN_0042ec10(*(int **)(*(int *)(iVar3 * 4 + param_1[0x1ad]) + 8),iVar2,param_4);
    if (iVar2 != 0) {
      if (param_4 == 0) {
        if (iVar3 != param_1[0x1b4]) {
          param_1[0x1b4] = iVar3;
          (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
        }
        FUN_00457354(param_1,param_2,0,0x1d42);
      }
      return 1;
    }
    if (param_3 < 1) {
      iVar2 = 0x23;
    }
    else {
      iVar2 = 0x24;
    }
    iVar3 = iVar3 + param_3;
  }
  return 0;
}

