// rea decompile_all
// name: FUN_00430180
// address: 0x430180
// body: available
// range: 0x430180-0x430220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00430180(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_14 [4];
  
  if (param_2 != param_1) {
    FUN_0042a474(local_14,(int)param_1,in_stack_ffffffc0,in_stack_ffffffc4,*(int *)(param_1[9] + 8))
    ;
    puVar2 = FUN_00430224(param_1,*(undefined4 **)(param_2[9] + 4),(undefined4 *)param_1[9]);
    iVar1 = param_1[9];
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if (*(int *)(iVar1 + 4) == 0) {
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 0xc) = iVar1;
    }
    else {
      uVar3 = FUN_0042ae80(*(int *)(param_1[9] + 4));
      iVar1 = param_1[9];
      *(undefined4 *)(iVar1 + 8) = uVar3;
      uVar3 = FUN_0042aea0(*(int *)(iVar1 + 4));
      *(undefined4 *)(param_1[9] + 0xc) = uVar3;
    }
    param_1[10] = param_2[10];
  }
  return param_1;
}

