// rea decompile_all
// name: FUN_0046a40c
// address: 0x46a40c
// body: available
// range: 0x46a40c-0x46a67c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046a58b) */
/* WARNING: Removing unreachable block (ram,0x0046a5d3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x0046a5db */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_0046a40c(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fd7c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x8c);
    param_1[0x8c] = (int)(param_1 + 0x89);
    param_1[0x8d] = (int)(param_1 + 0x8a);
    param_1[1] = (int)(param_1 + 0x89);
    param_1[2] = (int)(param_1 + 0x8a);
    param_1[0x88] = 0;
    param_1[0x8b] = 0;
    param_1[0x89] = (int)&PTR_FUN_004ea94c;
    param_1[0x8a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x8c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c0;
  FUN_00413cf4(param_1,1,0x4fd385,0,param_3,(uint *)0x3110,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c0;
  param_1[3] = (int)&PTR_LAB_004ff050;
  *(undefined ***)param_1[1] = &PTR_LAB_004ff124;
  *(undefined ***)param_1[2] = &PTR_LAB_004ff130;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff13c;
  param_1[0x18] = param_4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1a] = 0x40;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 8;
  param_1[0x2c] = -1;
  param_1[0x2d] = 0;
  FUN_004c7a28(param_1 + 0x2e,0,*param_1,0x3638,0,0);
  FUN_004cb7d0((int *)((int)param_1 + 0x166),0,*param_1,0x3624,0);
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 0;
  FUN_00415920(param_1,0x3282);
  *in_FS_OFFSET = local_28;
  return param_1;
}

