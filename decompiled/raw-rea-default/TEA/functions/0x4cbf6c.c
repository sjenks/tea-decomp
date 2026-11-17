// rea decompile_all
// name: FUN_004cbf6c
// address: 0x4cbf6c
// body: available
// range: 0x4cbf6c-0x4cc041 inclusive
// range: 0x4cc084-0x4cc08c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_004cbf6c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  FUN_004dce64(0x512a74);
  if (DAT_00512a1c == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00512a24 == '\0') {
      local_1c = 8;
      FUN_004c09ac((undefined4 *)&DAT_0051b9e4,local_130,param_1,'\x01');
      DAT_00512a24 = DAT_00512a24 + '\x01';
    }
    DAT_00512a1c = &DAT_0051b9e4;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00512a2d;
  }
  DAT_0051b78c = param_1;
  DAT_0051b790 = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_004a8c00();
    FUN_004cf41c((int)puVar1,param_3);
  }
  DAT_0051b794 = param_4;
  local_1c = 0x14;
  FUN_004755ac();
  *in_FS_OFFSET = local_2c;
  return;
}

