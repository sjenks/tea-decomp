// rea decompile_all
// name: FUN_0049edbc
// address: 0x49edbc
// body: available
// range: 0x49edbc-0x49ee7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049edbc(int param_1,int *param_2)

{
  int iVar1;
  int local_90 [14];
  LONG local_58 [6];
  int local_40;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  FUN_00490574(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 6) + 0x1c);
  }
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x36) == '\0') {
      FUN_004905e8(param_1,&local_10,&local_14,&local_18,&local_1c);
      FUN_0048f8fc(local_58,iVar1);
      local_20 = local_40 * *(int *)(param_1 + 0x50);
      *param_2 = *param_2 +
                 ((local_20 + local_10 + local_14) -
                 (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)));
    }
    else {
      FUN_0048f980(local_c,iVar1,*(uint **)(param_1 + 0x44));
      *param_2 = *param_2 + local_c[0];
    }
    if (*(char *)(param_1 + 0x37) != '\0') {
      FUN_0048f8fc(local_90,iVar1);
      param_2[1] = param_2[1] + local_90[0] + 2;
    }
  }
  return;
}

