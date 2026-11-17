// rea decompile_all
// name: FUN_0043bbfc
// address: 0x43bbfc
// body: available
// range: 0x43bbfc-0x43be22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0043bbfc(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7,
            undefined1 param_8,uint *param_9,undefined4 param_10,int *param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f4c68);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x14a;
    *(int **)((int)param_1 + 0x14a) = param_1 + 0x30;
    param_1[0x30] = (int)(param_1 + 0x2d);
    param_1[0x31] = (int)(param_1 + 0x2e);
    *(int **)((int)param_1 + 0x14e) = param_1 + 0x2d;
    *(int **)((int)param_1 + 0x152) = param_1 + 0x2e;
    param_1[1] = (int)(param_1 + 0x30);
    param_1[2] = (int)(param_1 + 0x2d);
    param_1[3] = (int)(param_1 + 0x2e);
    param_1[0x2c] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)((int)param_1 + 0x146) = 0;
    param_1[0x2d] = (int)&PTR_FUN_004ea94c;
    param_1[0x2e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x30,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x14a),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004264ec(param_1,1,param_3,param_4,param_5,0x2c42,param_6,param_7,param_9,param_10,param_11);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_LAB_004f4cac;
  param_1[4] = (int)&PTR_LAB_004f4d0c;
  *(undefined ***)param_1[2] = &PTR_LAB_004f4d24;
  *(undefined ***)param_1[3] = &PTR_LAB_004f4d30;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f4d3c;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f4dcc;
  *(undefined1 *)(param_1 + 0x2a) = param_8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

