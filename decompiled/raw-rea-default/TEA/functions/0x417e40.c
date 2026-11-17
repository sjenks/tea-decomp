// rea decompile_all
// name: FUN_00417e40
// address: 0x417e40
// body: available
// range: 0x417e40-0x417fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00417f95) */

int * __cdecl FUN_00417e40(int *param_1,int param_2,undefined4 *param_3,uint param_4,int param_5)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee1c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_004ea94c;
    param_1[0x10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1e;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_004c6664(param_1,1,uVar2,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1e;
  param_1[3] = (int)&PTR_FUN_004f0a50;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0a90;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0aa8;
  param_1[7] = 0;
  param_1[8] = (int)param_3;
  param_1[0xc] = 0;
  param_1[0xc] = (int)&DAT_00513d64;
  if (param_5 != 0) {
    pvVar1 = LoadImageA(*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)(param_4 & 0xffff),0
                        ,0,0,0x1000);
    param_1[7] = (int)pvVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

