// rea decompile_all
// name: FUN_0049da5c
// address: 0x49da5c
// body: available
// range: 0x49da5c-0x49daee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049da5c(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = GetSystemMetrics(DAT_00509de8);
  if (*(int *)(param_1 + 0x52) == 1) {
    *param_4 = *param_4 - iVar1;
  }
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  puVar2 = FUN_004dd744((int)param_3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar2 == (undefined4 *)0x0) &&
     (uVar3 = FUN_0049da2c(param_1,(int)param_3), (char)uVar3 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x56);
    if (iVar5 == 0) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a);
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_004917ac(param_1,*(int *)(param_1 + 0x5a));
      *param_4 = *param_4 + uVar4;
    }
    else if (iVar5 == 2) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a) * iVar1;
    }
  }
  return;
}

