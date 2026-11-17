// rea decompile_all
// name: FUN_0049b7b0
// address: 0x49b7b0
// body: available
// range: 0x49b7b0-0x49b901 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_0049b7b0(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  CHAR local_12c [260];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x5089dc);
  local_18 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9b;
    param_1[1] = (int)param_1 + 0x9f;
    *(undefined4 *)((int)param_1 + 0x97) = 0;
    *(undefined ***)((int)param_1 + 0x9b) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x9f) = &PTR_FUN_004ea93c;
    local_c = local_c + 1;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
  FUN_004a4de0(param_1,1,param_3,(uint *)0x0,0);
  local_c = local_c + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
  param_1[2] = (int)&PTR_LAB_00508a10;
  *(undefined ***)*param_1 = &PTR_LAB_00508aa0;
  *(undefined ***)param_1[1] = &PTR_LAB_00508aac;
  FUN_00497f00((undefined4 *)((int)param_1 + 0x86),1);
  local_c = local_c + 2;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_004c0cd4(param_1[0x1b] + 4,param_4,local_12c,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),1,0,local_12c);
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_0049b8f0;
    }
  }
  *in_FS_OFFSET = local_28;
LAB_0049b8f0:
  *in_FS_OFFSET = local_28;
  return param_1;
}

