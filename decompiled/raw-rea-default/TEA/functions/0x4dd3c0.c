// rea decompile_all
// name: FUN_004dd3c0
// address: 0x4dd3c0
// body: available
// range: 0x4dd3c0-0x4dd49a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004dd3c0(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ee7,s_xxtype_cpp_00516eeb,0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ef6,s_xxtype_cpp_00516efa,0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_004e5ce8(s_tp1_>tpName_00516f05,s_xxtype_cpp_00516f11,0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_004e5ce8(s_tp2_>tpName_00516f1c,s_xxtype_cpp_00516f28,0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

