// rea decompile_all
// name: FUN_0043c9b0
// address: 0x43c9b0
// body: available
// range: 0x43c9b0-0x43ca6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0043c9b0(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined3 extraout_var;
  char *pcVar5;
  
  if (param_1[0x19] == 2) {
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = FUN_0042ba08(param_1[0x1d4]);
      if (iVar3 <= param_1[0x1d5]) {
        return 1;
      }
      puVar4 = (uint *)FUN_0042baf8(param_1[0x1d4],param_1[0x1d5]);
      uVar1 = FUN_0042ed6c(param_1[0x1d4],param_1[0x1d5]);
      pcVar5 = (char *)CONCAT31(extraout_var,uVar1);
      if (param_3 + -2 < (int)pcVar5) {
        pcVar5 = (char *)(param_3 + -2);
      }
      FUN_004dcc40(param_2,puVar4,pcVar5);
      *(char *)((int)param_2 + (int)pcVar5) = '\n';
      *(char *)((int)param_2 + (int)(pcVar5 + 1)) = '\0';
      param_1[0x1d5] = param_1[0x1d5] + 1;
    }
    if ((param_4 & 0xfff) == 0) {
      FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

