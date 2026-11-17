// rea decompile_all
// name: FUN_004bf504
// address: 0x4bf504
// body: available
// range: 0x4bf504-0x4bf632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_004bf504(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50fbfc);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x25;
    *(int *)((int)param_1 + 0x25) = (int)param_1 + 0x19;
    *(int *)((int)param_1 + 0x29) = (int)param_1 + 0x1d;
    param_1[1] = (int)param_1 + 0x19;
    param_1[2] = (int)param_1 + 0x1d;
    *(undefined4 *)((int)param_1 + 0x15) = 0;
    *(undefined4 *)((int)param_1 + 0x21) = 0;
    *(undefined ***)((int)param_1 + 0x19) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x1d) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x25),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 1;
  param_1[3] = (int)&PTR_LAB_0050fc1c;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fc50;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fc5c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fc68;
  *(undefined1 *)(param_1 + 5) = 1;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

