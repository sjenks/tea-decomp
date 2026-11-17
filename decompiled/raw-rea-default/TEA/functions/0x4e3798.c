// rea decompile_all
// name: FUN_004e3798
// address: 0x4e3798
// body: available
// range: 0x4e3798-0x4e383d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004e3798(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint local_74 [20];
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_24 = param_1;
  local_20 = param_2;
  if (param_3 == (undefined8 *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *param_3;
  }
  if (param_4 == (undefined8 *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_4;
  }
  local_c = param_5;
  uStack_8 = param_6;
  iVar1 = (*(code *)PTR_FUN_00518a44)();
  if (iVar1 == 0) {
    wsprintfA((LPSTR)local_74,s__s___s_error_005187e4,param_2,(&PTR_FUN_00518a48)[param_1]);
    if (param_1 - 2U < 3) {
      _DAT_00518bd0 = 0x22;
    }
    else {
      _DAT_00518bd0 = 0x21;
    }
    FUN_004e5e58(local_74);
  }
  return;
}

