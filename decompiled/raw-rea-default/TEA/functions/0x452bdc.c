// rea decompile_all
// name: FUN_00452bdc
// address: 0x452bdc
// body: available
// range: 0x452bdc-0x452cf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00452bdc(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  *param_3 = 0x65;
  *param_4 = 0;
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  *param_5 = 1;
  if (*(int *)(param_1 + 0x690) == 0) {
    iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x6b4));
    iVar3 = iVar2 + 0x28;
    FUN_00479ab8(iVar3,1,100);
    if ((*(int *)(iVar1 + 0x1b8) != 0) &&
       (iVar1 = *(int *)(iVar1 + 0x1bc), *param_5 = iVar1, iVar1 == 0)) {
      iVar1 = FUN_00479b7c(iVar3);
      *param_5 = iVar1;
    }
    FUN_00479b08(iVar3,param_3,param_4);
    local_c = 0;
    if (*param_4 < *param_3) {
      if (**(char **)(iVar2 + 0x50) == '\x03') {
        local_c = 1;
      }
      else {
        local_c = 2;
      }
    }
    iVar1 = FUN_0041b280((int *)(param_1 + 0x50c));
    iVar2 = FUN_0041b280((int *)(param_1 + 0x2d8));
    FUN_00479ab8(iVar3,iVar2,iVar1);
    FUN_00479b08(iVar3,param_3,param_4);
    if ((*param_4 < *param_3) && (local_c == 0)) {
      local_c = 3;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

