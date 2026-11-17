// rea decompile_all
// name: FUN_00491150
// address: 0x491150
// body: available
// range: 0x491150-0x491444 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_00491150(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5,
            int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagTEXTMETRICA local_64;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  uint *local_8;
  
  FUN_004dce64(0x506cf8);
  local_1c = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x55) = &PTR_FUN_004ea93c;
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x5d),1);
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_00490ca8(param_1 + 1);
  local_10 = local_10 + 1;
  param_1[6] = (int)&PTR_FUN_00506f88;
  param_1[1] = (int)&PTR_LAB_00506ffc;
  *(undefined ***)param_1[4] = &PTR_LAB_0050701c;
  *(undefined ***)param_1[5] = &PTR_LAB_00507028;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00507034;
  param_1[10] = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  FUN_004a5098(*param_1,param_3,(uint *)0x0,param_6);
  FUN_004a7988(*param_1,0,0x2000000,0);
  bVar1 = FUN_004875a8();
  if (!bVar1) {
    FUN_004a7988(*param_1,0,0x800000,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_5 == (uint *)0x0) &&
     (param_5 = (uint *)FUN_004cc0f0(), local_8 = param_5, param_5 != (uint *)0x0)) {
    local_1c = 0x20;
    FUN_00490fa8(param_5,6,'\0',0);
    local_1c = 0x14;
    param_5 = local_8;
  }
  param_1[7] = (int)param_5;
  *(undefined1 *)((int)param_1 + 0x35) = param_4;
  *(bool *)((int)param_1 + 0x31) = *(char *)((int)param_1 + 0x35) != '\0';
  *(bool *)((int)param_1 + 0x32) = *(char *)((int)param_1 + 0x35) != '\x01';
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_0048f898(param_1[7],&local_64);
  *(char *)(param_1 + 0xc) = (char)local_64.tmHeight + (char)local_64.tmExternalLeading;
  *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)(param_1 + 0xc);
  if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
    iVar2 = GetSystemMetrics(DAT_00509df0);
    *(int *)(*param_1 + 0x2c) = *(int *)(*param_1 + 0x2c) + iVar2 * 2;
  }
  *(undefined4 *)(*param_1 + 0x5c) = DAT_0051b1e0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

