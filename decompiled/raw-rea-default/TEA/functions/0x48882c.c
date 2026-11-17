// rea decompile_all
// name: FUN_0048882c
// address: 0x48882c
// body: available
// range: 0x48882c-0x488a39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0048882c(uint *param_1,uint *param_2)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_d0 [4];
  int local_cc;
  int local_c8;
  short local_c0;
  short local_be;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  HDC local_7c [10];
  HDC local_54 [10];
  HDC local_2c [10];
  
  FUN_004dce64(0x504a64);
  local_90 = 8;
  FUN_00497758((int *)local_2c);
  local_84 = local_84 + 3;
  local_90 = 0x20;
  FUN_00497758((int *)local_54);
  local_84 = local_84 + 3;
  local_90 = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,local_d0);
  if ((local_c0 == 1) && (local_be == 1)) {
    pHVar1 = CreateBitmap(local_cc,local_c8,1,1,(void *)0x0);
    *param_1 = (uint)pHVar1;
  }
  else {
    local_90 = 0x2c;
    FUN_004a8760((int *)local_7c);
    local_84 = local_84 + 3;
    local_90 = 0x38;
    pHVar1 = CreateCompatibleBitmap(local_7c[0],local_cc,local_c8);
    *param_1 = (uint)pHVar1;
    local_84 = local_84 + -3;
    FUN_004a86dc((int *)local_7c,0);
    local_90 = 0x14;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  FUN_004978c0(local_2c,param_2);
  FUN_004978c0(local_54,param_1);
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = local_cc;
  local_ac = local_c8;
  local_b8 = 0;
  local_b4 = 0;
  BitBlt(local_54[0],0,0,local_cc,local_c8,local_2c[0],0,0,0xcc0020);
  local_84 = local_84 + -3;
  FUN_00497930((int *)local_54,2);
  local_84 = local_84 + -3;
  FUN_00497930((int *)local_2c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

