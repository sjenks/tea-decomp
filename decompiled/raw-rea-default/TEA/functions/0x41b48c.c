// rea decompile_all
// name: FUN_0041b48c
// address: 0x41b48c
// body: available
// range: 0x41b48c-0x41b5d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0041b48c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  tagRECT local_270;
  CHAR local_260 [519];
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  uint local_34 [2];
  HDC local_2c;
  int local_27;
  
  FUN_004dce64(0x4eeb60);
  iVar1 = FUN_004a76a8(*param_1,0x31,0,0);
  if (iVar1 != 0) {
    local_48 = 8;
    FUN_004a8674((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_3c = local_3c + 2;
    local_48 = 0x20;
    FUN_0048f708(local_34,iVar1,0);
    local_3c = local_3c + 2;
    (**(code **)(local_27 + 0x14))();
    local_3c = local_3c + -2;
    FUN_00494064(local_34,0);
    FUN_004dcc40((undefined4 *)local_260,*(uint **)(param_2 + 8),(char *)0x207);
    local_59 = 0;
    local_270.left = 0;
    local_270.top = 0;
    local_270.right = 0;
    local_270.bottom = 0;
    local_48 = 0x14;
    FUN_004a76a8(*param_1,0xb2,0,(LPARAM)&local_270);
    DrawTextA(local_2c,local_260,-1,&local_270,0x14420);
    FUN_0041b1ec(param_1,local_260);
    local_3c = local_3c + -2;
    FUN_004a86dc((int *)&local_2c,2);
  }
  *in_FS_OFFSET = local_58;
  return;
}

